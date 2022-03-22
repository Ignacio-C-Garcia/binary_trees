#include "binary_trees.h"
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		count++;
	else
		count = 0;
	if (tree->left)
		count += binary_tree_nodes(tree->left);
	if (tree->right)
		count += binary_tree_nodes(tree->right);
	return (count);
}