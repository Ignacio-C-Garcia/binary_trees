#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that insert a node as right-child
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: pointer to the new nod or null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *Nchild;

	if (!parent)
		return (NULL);
	Nchild = malloc(sizeof(binary_tree_t));
	if (Nchild == NULL)
		return (NULL);
	Nchild->n = value;
	Nchild->left = NULL;
	Nchild->right = NULL;
	Nchild->parent = parent;
	if (parent->right)
		parent->right->parent = Nchild;
	Nchild->right = parent->right;
	parent->right = Nchild;
	return (Nchild);
}
