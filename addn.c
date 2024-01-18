#include "monty.h"

/**
 * addnode - the entry point.
 * Description - add node to the head stack.
 * @head: the stack head.
 * @n: the new value.
 * Return: .
*/

void addnode(stack_t **head, int n)
{

	stack_t *nn, *a;

	a = *head;
	nn = malloc(sizeof(stack_t));
	if (nn == NULL)
	{ printf("Error\n");
		exit(0); }
	if (a)
		a->prev = nn;
	nn->n = n;
	nn->next = *head;
	nn->prev = NULL;
	*head = nn;
}
