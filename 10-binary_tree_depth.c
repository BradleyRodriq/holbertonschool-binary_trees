#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node ina binary tree
 * @tree: pointer to the node to measure
 * Return: if tree is NULL, 0 otherwise returns depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree != NULL && tree->parent != NULL)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	else
	{
		return (0);
	}
}
