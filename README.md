# tree-sitter-gsp

This is a tree-sitter parser for the [GSP][1] language.  It has complete support
for the GSP grammar including the ‘>’ node prefix that existed before GSP v3.
This repository also comes with queries for syntax highlighting, code folding,
indentation, etc., as well as automatic filetype detection for Neovim.

## Neovim Support

If you would like to use this parser in Neovim, the following configuration is
required.

### Plugin Installation

The plugin installation syntax will depend on your package manager.  To install
the plugin via Packer, do the following.  This will enable the syntax
highlighting amongst other things, and automatic filetype detection.

```lua
use 'https://git.sr.ht/~mango/tree-sitter-gsp'
```

### TS Parser Installation

The Tree-Sitter parser needs to be specified manually in your nvim-treesitter
configuration.  The following should be sufficient.  When you’re done, simply
run `:TSInstall gsp`

```lua
local config = require('nvim-treesitter.parsers').get_parser_configs()
config.gsp = {
	install_info = {
		url = 'https://git.sr.ht/~mango/tree-sitter-gsp',
		files = {'src/parser.c'},
	},
	filetype = 'gsp',
}
```

[1]: https://sr.ht/~mango/gsp
