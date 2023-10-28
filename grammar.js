module.exports = grammar({
	name: 'gsp',
	extras: $ => [$._S],
	rules: {
		source_file: $ => repeat($.node),

		node: $ => seq(
			optional('>'),
			$.node_name,
			optional($.attribute_list),
			'{',
			optional($.node_body),
			'}',
		),

		node_body: $ => choice(
			repeat1($.node),
			$.text_node,
		),

		node_name: $ => /[a-zA-Z:_\u{000C0}-\u{000D6}\u{000D8}-\u{000F6}\u{000F8}-\u{002FF}\u{00370}-\u{0037D}\u{0037F}-\u{01FFF}\u{0200C}-\u{0200D}\u{02070}-\u{0218F}\u{02C00}-\u{02FEF}\u{03001}-\u{0D7FF}\u{0F900}-\u{0FDCF}\u{0FDF0}-\u{0FFFD}\u{10000}-\u{EFFFF}][a-zA-Z0-9:_\-.·\u{00300}-\u{0036F}\u{0203F}-\u{02040}\u{000C0}-\u{000D6}\u{000D8}-\u{000F6}\u{000F8}-\u{002FF}\u{00370}-\u{0037D}\u{0037F}-\u{01FFF}\u{0200C}-\u{0200D}\u{02070}-\u{0218F}\u{02C00}-\u{02FEF}\u{03001}-\u{0D7FF}\u{0F900}-\u{0FDCF}\u{0FDF0}-\u{0FFFD}\u{10000}-\u{EFFFF}]*/u,

		text_node: $ => seq(
			choice('-', '='),
			repeat(
				choice(
					$.literal_text,
					seq('@', $.node),
				),
			),
		),

		literal_text: $ => /(\\[@}\\]|[^@}])+/,

		attribute_list: $ => repeat1($.attribute),

		attribute: $ => choice(
			$.class_shorthand,
			$.id_shorthand,
			seq(
				$.attribute_name,
				optional(seq('=', $.attribute_value)),
			),
		),

		class_shorthand: $ => /\.[^\p{White_Space}]+/u,
		id_shorthand: $ => /#[^\p{White_Space}]+/u,

		attribute_name: $ => /[a-zA-Z0-9_-]+/,
		attribute_value: $ => /"(\\.|[^"\\])*"/,

		_S: $ => /\p{White_Space}*/u,
	},
})
