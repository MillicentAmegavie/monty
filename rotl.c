#include "monty.h"

/**
  *f_rotl- rthe entry point.
  *Description - rotates the stack to the top.
  *@head: the stack head.
  *@counter: the line number.
  *Return: .
  */

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *t = *head, *a;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	a = (*head)->next;
	a->prev = NULL;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = *head;
	(*head)->next = NULL;
	(*head)->prev = t;
	(*head) = a;
}
