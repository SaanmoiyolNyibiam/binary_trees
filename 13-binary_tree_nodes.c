#include "binary_trees.h"
#include "12-binary_tree_leaves.c"
#include "11-binary_tree_size.c"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * in a binary tree
 * @tree: a pointer to the root node of the tree to count
 * the number number of nodes
 *
 * Return: if tree is NULL, return 0
 * else the number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t tree_size, tree_leaves;

	if (tree == NULL)
		return (0);

	tree_size = binary_tree_size(tree);
	tree_leaves = binary_tree_leaves(tree);

	return (tree_size - tree_leaves);
}
