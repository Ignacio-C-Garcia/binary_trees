#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size
 * @tree: pointer to root
 * Return: the size or null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter = 1;

	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		counter += binary_tree_size(tree->left);
	}
	if (tree->right)
	{
		counter += binary_tree_size(tree->right);
	}
	return (counter);
}
