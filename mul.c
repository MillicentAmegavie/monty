#include "monty.h"

/**
 * f_mul - the entry point.
 * Description - multiplies the top two elements of the stack.
 * @head: the stack head.
 * @counter: the line number.
 * Return: .
*/

void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int l = 0, a;

	h = *head;
	while (h)
	{
		h = h->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	a = h->next->n * h->n;
	h->next->n = a;
	*head = h->next;
	free(h);
}
