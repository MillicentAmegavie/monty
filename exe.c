#include "monty.h"

/**
* execute - the entry point.
* Description - executes the kcode.
* @stack: the stack head linked list.
* @counter: the line_counter.
* @file: the poiner to monty file.
* @content: the line content.
* Return: .
*/

int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int m = 0;
	char *k;

	k = strtok(content, " \n\t");
	if (k && k[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[m].opcode && k)
	{
		if (strcmp(k, opst[m].opcode) == 0)
		{	opst[m].f(stack, counter);
			return (0);
		}
		m++;
	}
	if (k && opst[m].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, k);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
