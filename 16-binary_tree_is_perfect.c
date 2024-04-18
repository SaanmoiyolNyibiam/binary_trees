#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root of the tree to check
 *
 * Return: if tree is NULL, return 0
 * else, return 1 if tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	while (tree != NULL)
	{
		//check for left and right child
		//if only one child, return 0
		if ((tree->left && !(tree->right)) || (tree->right && !(tree->left)))
				return (0);
		//if none push NULL to queue
		if (!(tree->left) && !(tree->right))
		{
			push(NULL);
			pop();
			continue;
		}
		// - then (pop queue)
		//   **meanwhile(in pop) if poped is NULL
		//      check if perfect.
		//      else continue iteration**
		//if two chidren push them to queue
		//pop queue
	}
}

