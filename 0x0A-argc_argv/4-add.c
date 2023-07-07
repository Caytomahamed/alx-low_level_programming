#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - add infinity numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num;
	int result;
	int i;

	result = 0;

	if (argc == 1)
	{
		printf("%d\n", result);
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
