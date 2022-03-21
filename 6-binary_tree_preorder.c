#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes through a binary tree
 * @tree: pointer to root
 * @func: pointer to function to call each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
