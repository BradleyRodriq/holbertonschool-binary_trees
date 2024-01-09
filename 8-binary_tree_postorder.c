#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary tree using postorder traversal
 * @tree: the root of the node of the tree to traverse
 * @func: the function call
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
