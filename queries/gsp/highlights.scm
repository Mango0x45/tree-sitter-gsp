[">" "-" "=" "@"] @operator
["{" "}"] @tag.delimiter
(node_name) @tag
[
 (attribute_name)
 (class_shorthand)
 (id_shorthand)
] @tag.attribute
(attribute_value) @string
(comment) @comment
