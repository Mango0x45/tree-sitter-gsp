(node) @node.outer
(node_body) @node.inner
(text) @text.outer
(comment) @comment.outer
(comment (_)+ @comment.inner)
[(id_attr) (class_attr) (attr)] @attribute.outer
