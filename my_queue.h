#ifndef MY_QUEUE_H
#define MY_QUEUE_H
#include "binary_trees.h"

/**
 * struct queue_s - linked list representation of a queue
 * @data:
 * @next: pointer to next node
 *
 * Description: linked list data structure for a queue
 * that will be used to traverse a binary tree vertically
 */
typedef struct queue_s
{
	binary_tree_t *tree_node;
	struct queue_s *next;
} queue_b;


/* function prototypes */
void push(binary_tree_t *tree);
pop
free_queue
#endif /* MY_QUEUE */

