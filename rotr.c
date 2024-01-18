#include "monty.h"

/**
  *f_rotr- the entry point.
  *Description - rotates the stack to the bottom.
  *@head: the stack head.
  *@counter: the line number.
  *Return: .
  */

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *c;

	c = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (c->next)
	{
		c = c->next;
	}
	c->next = *head;
	c->prev->next = NULL;
	c->prev = NULL;
	(*head)->prev = c;
	(*head) = c;
}
