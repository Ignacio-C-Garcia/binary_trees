#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in binary tree
 * @tree: pointer to the root
 * Return: 0 or number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree->left && !tree->right)
		counter++;
	else
		counter = 0;
	if (tree->left)
		counter += binary_tree_leaves(tree->left);
	if (tree->right)
		counter += binary_tree_leaves(tree->right);
	return (counter);
}
