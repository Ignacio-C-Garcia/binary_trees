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
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to tree
 * Return: true or false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);
        if (!tree->left && !tree->right)
                return (1);
        if (tree->left && tree->right)
                return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
        return (0);
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
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to node
 * Return: true or false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}
