#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - Checks if a node is a leaf node
 * @node: Node element
 * Return: Node address
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
}
