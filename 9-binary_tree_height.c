#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the root node of the tree to measure
 * Return: 0 if tree is null, else returns height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t left = 0, right = 0;

		if (tree->left != NULL)
		{
			left = 1 + binary_tree_height(tree->left);
		}
		if (tree->right != NULL)
		{
			right = 1 + binary_tree_height(tree->right);
		}
		if (left > right)
		{
			return (left);
		}
		else
		{
			return (right);
		}
	}
	else
	{
		return (0);
	}
}

