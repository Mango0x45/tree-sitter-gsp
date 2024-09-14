package tree_sitter_gsp_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_gsp "github.com/tree-sitter/tree-sitter-gsp/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gsp.Language())
	if language == nil {
		t.Errorf("Error loading Gsp grammar")
	}
}
