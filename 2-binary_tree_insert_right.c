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
	binary_tree_t *create_node;
	if (!parent)
	{
		return (NULL);
	}
	create_node = binary_tree_node(parent, value);
	if (!create_node)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		create_node->right = parent->right;
		parent->right->parent = create_node;
	}
	parent->right = create_node;
	return (create_node);
}
