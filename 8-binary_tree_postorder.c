#include "binary_trees.h"

/**
 * binary_tree_postorder - prints elements using traversal port order
 * @tree: tree
 * @func: function
 *
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
	{
		return;
	}
	if (!func)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
