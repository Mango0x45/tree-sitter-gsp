const IDENT = /\p{XID_Start}[-\p{XID_Continue}]*/u

module.exports = grammar({
	name: 'gsp',
	extras: $ => [/\p{Pattern_White_Space}+/u],
	rules: {
		document: $ => repeat($._toplevel),
		_toplevel: $ => choice($.comment, $.node),

		comment: $ => seq('/', $.node),
		node: $ => seq($.node_name, optional($.attrs), $.node_body),

		node_name: $ => IDENT,
		node_body: $ => seq(
			'{',
			choice(
				repeat($._toplevel),
				seq(choice('-', '='), optional($.text)),
			),
			'}',
		),

		attrs: $ => repeat1(choice(
			$.attr,
			$.id_attr,
			$.class_attr,
		)),

		attr: $ => seq(IDENT, '=', /"(\\["\\]|[^"\\])+"/),
		id_attr: $ => seq('#', token.immediate(IDENT)),
		class_attr: $ => seq('.', token.immediate(IDENT)),

		text: $ => repeat1(choice(
			/(\\[@}\\]|[^@}\\])+/,
			seq('@', $._toplevel),
		)),
	},
})
