#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - the entry point.
* Description - monty code interpreter.
* @argc: the number of arguments.
* @argv: the monty file location.
* Return: Always 0 on success.
*/

int main(int argc, char *argv[])
{
	char *m;
	FILE *file;
	size_t s = 0;
	ssize_t rl = 1;
	stack_t *stack = NULL;
	unsigned int c = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (rl > 0)
	{
		m = NULL;
		rl = getline(&m, &s, file);
		bus.content = m;
		c++;
		if (rl > 0)
		{
			execute(m, &stack, c, file);
		}
		free(m);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
