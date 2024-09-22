const IDENT = /\p{XID_Start}[-\p{XID_Continue}]*/u

module.exports = grammar({
	name: 'gsp',
	extras: $ => [/\p{Pattern_White_Space}+/u],
	rules: {
		document: $ => repeat($._toplevel),
		_toplevel: $ => choice($.comment, $.node),

		comment: $ => seq(
			'/',
			optional(seq(
				field('name', $.ident),
				optional(field('attrs', $.attr_list)),
			)),
			field('body', $.node_body),
		),
		node: $ => seq(
			field('name', $.ident),
			optional(field('attrs', $.attr_list)),
			field('body', $.node_body),
		),

		node_body: $ => seq(
			'{',
			choice(
				repeat($._toplevel),
				seq(choice('-', '='), optional($.text)),
			),
			'}',
		),

		attr_list: $ => repeat1(choice(
			$.attr,
			$.id_attr,
			$.class_attr,
		)),

		attr: $ => seq(
			field('name', $.ident),
			optional(seq('=', field('value', $.string))),
		),
		id_attr: $ => seq('#',
			field('name', alias(token.immediate(IDENT), $.ident))),
		class_attr: $ => seq('.',
			field('name', alias(token.immediate(IDENT), $.ident))),

		text: $ => repeat1(choice($.raw_text, $.inline_node)),
		raw_text: $ => /(\\[@}\\]|[^@}\\\p{Pattern_White_Space}])((\\[@}\\]|[^@}\\])*(\\[@}\\]|[^@}\\\p{Pattern_White_Space}]))?/u,
		inline_node: $ => seq('@', $._toplevel),

		ident: $ => IDENT,
		string: $ => /"(\\["\\]|[^"\\])+"/,
	},
})
