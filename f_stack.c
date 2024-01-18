#include "monty.h"

/**
* free_stack - the entry point.
* Description - frees a doubly linked list.
* @head: the stack head.
*/

void free_stack(stack_t *head)
{
	stack_t *a;

	a = head;
	while (head)
	{
		a = head->next;
		free(head);
		head = a;
	}
}
