#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes through a binary tree
 * @tree: pointer to root
 * @func: pointer to function to call each node
 */
size_t recursive_counter(const binary_tree_t *tree, size_t counter)
{
        if (tree->left)
	{
                counter = 1 + recursive_counter(tree->left, counter);
	}
        if (tree->right)
	{
                counter = 1 + recursive_counter(tree->right, counter);
	}
        return (counter);
}
size_t binary_tree_size(const binary_tree_t *tree)
{
        size_t counter = 1;

	if (tree == NULL)
		return (0);
        return (recursive_counter(tree, counter));
}
