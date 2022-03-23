#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to node
 * Return: pointer to node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
