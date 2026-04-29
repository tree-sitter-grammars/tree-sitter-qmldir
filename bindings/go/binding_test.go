package tree_sitter_qmldir_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_qmldir "github.com/tree-sitter-grammars/tree-sitter-qmldir/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_qmldir.Language())
	if language == nil {
		t.Errorf("Error loading Qmldir grammar")
	}
}
