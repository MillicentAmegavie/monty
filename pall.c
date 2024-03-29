#include "monty.h"

/**
 * f_pall - the entry point.
 * Description - prints the stack.
 * @head: the stack head.
 * @counter: no use.
 * Return: .
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
