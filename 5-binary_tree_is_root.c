#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - Checks if a node is the root node
 * @node: Pointer to node
 * Return: Node address
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!(node->parent) && (node->left || node->right))
		return (1);
	return (0);
}
