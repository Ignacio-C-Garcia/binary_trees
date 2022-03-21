#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that insert a node as left-child
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: pointer to the new nod or null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *Nchild;

	Nchild = malloc(sizeof(binary_tree_t));
	if (Nchild == NULL)
		return (NULL);
	Nchild->n = value;
	Nchild->left = NULL;
	Nchild->right = NULL;
	Nchild->parent = parent;
	if (parent->left)
		parent->left->parent = Nchild;
	Nchild->left = parent->left;
	parent->left = Nchild;
	return (Nchild);
}
