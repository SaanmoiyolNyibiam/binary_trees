#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - measures the balance factor
 * of a binary tree
 * @tree: a pointer to the root of the node of the tree
 * to measure the balance factor
 *
 * Return: if tree is NULL, return 0
 * else return the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h, res;

	if (tree == NULL)
		return (0);

	left_h = _binary_tree_height(tree->left);
	right_h = _binary_tree_height(tree->right);
	res = left_h - right_h;

	return (res);
}
