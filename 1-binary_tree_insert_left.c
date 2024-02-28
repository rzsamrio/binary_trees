#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node at left of parent
 * @parent: Parent node
 * @value: Value of node
 * Return: Node address
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *node, *tmp;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (node->parent->left != NULL)
	{
		tmp = parent->left;
		node->parent->left = node;
		node->left = tmp;
	}
	else
		node->parent->left = node;

	return (node);
}
