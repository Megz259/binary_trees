#include "binary_trees.h"

/**
 * binary_tree_preorder - prints elements using traversal
 * @tree: tree
 * @func: function
 *
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
	{
		return;
	}
	if (!func)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
