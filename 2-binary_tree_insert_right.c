#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a node to the right of another
 * @parent: pointer to a node
 * @value: value of node
 *
 * Return: new node, else NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	if (!parent)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (!new_node)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
