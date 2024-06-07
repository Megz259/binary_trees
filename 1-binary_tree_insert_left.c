#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a node to the left of another
 * @parent: pointer to a node
 * @value: value of node
 *
 * Return: new node, else NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		create_node->left = parent->left;
		parent->left->parent = create_node;
	}
	parent->left = create_node;
	return (create_node);
}
