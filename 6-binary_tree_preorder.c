#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a binary tree via preorder
 * @tree: root node
 * @func: pointer to function to implement
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
