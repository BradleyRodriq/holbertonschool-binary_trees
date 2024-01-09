#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a tree
 * @tree: pointer to the root of the node of the tree to count
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			leaves += 1;
		}
		leaves += binary_tree_leaves(tree->right);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}

