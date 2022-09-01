#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
