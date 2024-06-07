#include "binary_trees.h"

/**
 * binary_tree_node -  node
 * @parent: pointer to node created
 * @value: value of node
 *
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *create_node;

	create_node = malloc(sizeof(binary_tree_t));
	if (!create_node)
	{
		return (NULL);
	}
	create_node->n = value;
	create_node->parent = parent;
	create_node->left = NULL;
	create_node->right = NULL;
	return (create_node);
}
