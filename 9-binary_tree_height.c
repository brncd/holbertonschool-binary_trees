#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	else
	{
		size_t left_side = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		size_t right_side = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return (MAX(left_side, right_side));
	}
}
