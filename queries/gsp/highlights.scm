["-" "=" "@"] @operator
["{" "}"] @tag.delimiter
(node name: (ident) @tag)
[(id_attr) (class_attr)] @tag.attribute
(attr name: (ident) @tag.attribute)
(string) @string
(comment) @comment
([_] @comment
 (#has-ancestor? @comment comment))
