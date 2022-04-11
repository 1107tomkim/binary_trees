#include "binary_trees.h"

/**
 * binary_tree_is_root - checks to see if its a root node
 * @node: pointer to node
 * Return: returns 1 if root, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!(node))
		return (0);

	if (!(node->parent))
		return (1);

	else
		return (0);
}
