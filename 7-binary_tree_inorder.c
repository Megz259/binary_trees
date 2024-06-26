#include "binary_trees.h"

/**
 * binary_tree_inorder - prints tree in traversal order
 * @tree: tree
 * @func: function
 *
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
	{
		return;
	}
	if (!func)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
