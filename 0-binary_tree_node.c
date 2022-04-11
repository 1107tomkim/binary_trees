#include "binary_trees.h"

/**
 * binary_tree_node - Create node for binary tree
 * @parent: parent node
 * @value: value to put inside node
 * Return: Pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!(new_node))
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (!(parent))
		new_node->parent = NULL;
	else
		new_node->parent = parent;

	return (new_node);
}


