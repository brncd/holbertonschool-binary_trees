#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * @value: value to store in the new node
 * @parent: pointer to the node to insert the right-child in
 * Return: newNode
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (!parent)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (!newNode)
		return (NULL);

	if (parent->right)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}

	parent->right = newNode;

	return (newNode);
}
