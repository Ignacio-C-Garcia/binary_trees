#include "binary_trees.h"
/**
 * binary_tree_postorder - function post-order traversal
 * @tree: pointer to the root
 * @func: pointer to the func
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}
