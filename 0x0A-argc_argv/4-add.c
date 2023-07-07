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
	int result = 0;
	long num;
	char *endptr;
	int i;

	if (argc == 1)
	{
		printf("%d\n", result);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &endptr, 10);
		if (*endptr != '\0' || endptr == argv[i])
		{
			printf("Error\n");
			return (1);
		}
		result += num;
	}

	printf("%d\n", result);
	return (</stdlib.h>0);
}
