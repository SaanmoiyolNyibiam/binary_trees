#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to be deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/**
	 * recursively call self to delete tree
	 * using post order traversal
	 */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
