#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: is a pointer to the parent node
 * @value: value of to put in a new node
 * Return: a pointer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n =  value;
	new->left = new->right = NULL;

	return (new);
}
