#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the tree to be checked
 * Return: if tree is NULL, return 0, otherwise 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (1);
	}
	if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL))
	{
		return (0);
	}
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

