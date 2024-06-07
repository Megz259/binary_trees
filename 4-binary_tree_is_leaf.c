#include "binary_trees.h"

/**
 * binary_tree_is_leaf - is node a leaf
 * @node: node in question
 *
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL)
	{
		return (1);
	}
	if (node->right == NULL)
	{
		return (1);
	}
	return (0);
}
