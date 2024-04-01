#include "binary_trees.h"

/**
 * traverse_tree - traverses the binary tree
 * @tree: the tree to be traversed
 *
 * Return: if tree is NULL or a leaf or has two children
 * return 0
 * else, return the number of nodes that have one child
 */
int traverse_tree(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && !(tree->right == NULL))
		return (1 + traverse_tree(tree->left) + traverse_tree(tree->right));
	else if (tree->right == NULL && !(tree->left == NULL))
		return (1 + traverse_tree(tree->left) + traverse_tree(tree->right));
	else
		return (traverse_tree(tree->left) + traverse_tree(tree->right));

}
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: if tree is NULL and is not full, return 0
 * else, return 1 if full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_check;

	if (tree == NULL)
		return (0);

	full_check = traverse_tree(tree);

	if (full_check)
		return (0);
	else
		return (1);
}
