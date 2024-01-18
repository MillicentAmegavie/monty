#include "monty.h"

/**
  *f_sub- he entry point.
  *Description - substraction.
  *@head: the stack head.
  *@counter: the line number.
  *Return: .
  */

void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int s, m;

	aux = *head;
	for (m = 0; aux != NULL; m++)
		aux = aux->next;
	if (m < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	s = aux->next->n - aux->n;
	aux->next->n = s;
	*head = aux->next;
	free(aux);
}
