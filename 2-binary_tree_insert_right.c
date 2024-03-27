#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child
 * of another node
 * @parent: a pointer to node to insert the right child ine
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* do checks */
	if (parent == NULL)
		return (NULL);

	/* create new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* add to the right of the parent if no left child */
		new_node->parent = parent;
		new_node->n = value;
		new_node->left = NULL;
	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->right = NULL;
	}
	else /* else replace the left child*/
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;

	}

	return (new_node);
}
