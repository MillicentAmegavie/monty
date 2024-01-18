#include "monty.h"

/**
 * f_queue - the entry point.
 * Description - prints the top.
 * @head: the stack head.
 * @counter: the line number.
 * Return: .
 */

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - the entry point.
 * Description - add node to the tail stack.
 * @n: the new value.
 * @head: the stack head.
 * Return: .
 */

void addqueue(stack_t **head, int n)
{
	stack_t *nn, *a;

	a = *head;
	nn = malloc(sizeof(stack_t));
	if (nn == NULL)
	{
		printf("Error\n");
	}
	nn->n = n;
	nn->next = NULL;
	if (a)
	{
		while (a->next)
			a = a->next;
	}
	if (!a)
	{
		*head = nn;
		nn->prev = NULL;
	}
	else
	{
		a->next = nn;
		nn->prev = a;
	}
}
