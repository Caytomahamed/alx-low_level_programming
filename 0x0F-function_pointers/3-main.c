#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point. Performs an arithmetic operation on two integers.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;
	char *s;
	int (*op_fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	s = argv[2];
	b = atoi(argv[3]);

	op_fun = get_op_func(s);

	if (op_fun != NULL)
	{
		result = op_fun(a, b);
		printf("%d\n", result);
	}

	if (op_fun == NULL)
	{
		printf("Error\n");
		return (99);
	}

	return (0);
}
