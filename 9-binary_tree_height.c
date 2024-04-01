#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of
 * a binary tree(height in size_t)
 * @tree: a pointer to the root node of the tree
 * to measrure the height
 *
 * Return: if tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (_binary_tree_height(tree));
}

/**
 * _binary_tree_height - measures the height of
 * a binary tree(height in int)
 * @tree: a pointer to the root node of the tree
 * to measrure the height
 *
 * Return: if tree is NULL, return 0
 */
int _binary_tree_height(const binary_tree_t *tree)
{
	int lh, rh, max_height;

	if (tree == NULL)
		return (-1);

	lh = _binary_tree_height(tree->left);
	rh = _binary_tree_height(tree->right);
	max_height = (lh > rh) ? lh + 1 : rh + 1;

	return (max_height);
}

