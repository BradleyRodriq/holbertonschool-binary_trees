#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: if tree is NULL, return 0, otherwise returns balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree != NULL)
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		return (left_height - right_height);
	}
	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the root node of the tree to measure
 * Return: 0 if tree is null, else returns height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t left = binary_tree_height(tree->left);
		size_t right = binary_tree_height(tree->right);
		
		return (1 + (left > right ? left : right));
	}
	else
	{
		return (0);
	}
}

