[">" "-" "=" "@"] @operator
["{" "}"] @tag.delimiter
((node (node_name @_name) (_))
 (#eq? @_name "/")) @comment
(node_name) @tag
[
 (attribute_name)
 (class_shorthand)
 (id_shorthand)
] @tag.attribute
(attribute_value) @string
