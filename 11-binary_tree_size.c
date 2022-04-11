#include "binary_trees.h"

/**
 * binary_tree_size - measure size of tree
 * @tree: pointer to current node
 * Return: returns size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!(tree))
		return (0);
	else
		return (binary_tree_size(tree->right) + 1 + binary_tree_size(tree->left));
}
