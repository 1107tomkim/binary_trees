#include "binary_trees.h"

/**
 * binary_tree_depth - finds depth of tree
 * @tree: pointer to root node
 * Return: Returns the depth of tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_height;

	if ((!(tree)) || (!(tree->parent)))
		return (0);

	tree_height = binary_tree_depth(tree->parent);
	return (tree_height + 1);
}
