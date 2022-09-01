#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - function that couts the nodes with at least
 * 1 child in a binary tree
 * @tree: the pointer tto the root node of the tree
 * Return: 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}
