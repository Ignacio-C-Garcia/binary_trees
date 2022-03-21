#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: pointer to the new nod or null
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child = NULL;

	child = malloc(sizeof(binary_tree_t));
	if (child == NULL)
		return (NULL);
	child->n = value;
	child->parent = parent;
	child->left = NULL;
	child->right = NULL;

	return (child);
}

