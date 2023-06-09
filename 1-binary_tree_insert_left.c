#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * @value: value to store in the new node
 * @parent: pointer to the node to insert the left-child in
 * Return: newNode
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (!parent)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (!newNode)
		return (NULL);

	if (parent->left)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}

	parent->left = newNode;
	return (newNode);
}
