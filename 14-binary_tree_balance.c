#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a bt
 * @tree: pointer to root
 * Return: 0 or height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree->left)
		height_l = 1 + binary_tree_height(tree->left);
	else
		height_l = 0;

	if (tree->right)
		height_r = 1 + binary_tree_height(tree->right);
	else
		height_r = 0;

	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}
/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: pointer to a node
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_r = 0, height_l = 0;

	if (!tree)
		return (0);
	if (tree->left)
		height_l = 1 + binary_tree_height(tree->left);

	if (tree->right)
		height_r = 1 + binary_tree_height(tree->right);

	return (height_l - height_r);
}
