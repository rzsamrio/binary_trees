#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse a binary tree via inorder
 * @tree: root node
 * @func: pointer to function to implement
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}
