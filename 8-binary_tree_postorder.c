#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary tree via postorder
 * @tree: root node
 * @func: pointer to function to implement
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
