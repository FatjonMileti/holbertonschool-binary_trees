#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - the function that measures the depth of a node
 * in binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
