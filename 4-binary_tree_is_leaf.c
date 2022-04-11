#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks to see if its a leaf
 * @node: pointer to node
 * Return: returns 1 if its a leaf, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!(node))
		return (0);

	if ((!(node->left)) && (!(node->right)))
		return (1);

	else
		return (0);
}

