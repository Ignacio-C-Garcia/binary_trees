#include "binary_trees.h"
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child = NULL;

	child = malloc(sizeof(binary_tree_t));
	if(child == NULL)
		return (NULL);
	child->n = value;
	child->parent = parent;
	child->left = NULL;
	child->right = NULL;

	return (child);
}

