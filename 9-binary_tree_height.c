#include "binary_trees.h"

/**
 * binary_tree_height - height of tree
 * @tree: tree
 *
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t length = 0, width = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
	{
		length = 1 + binary_tree_height;
	}
	else
	{
		length = 0;
	}
	if (tree->right)
	{
		width = 1 + binary_tree_height;
	}
	else
	{
		width = 0;
	}
}
