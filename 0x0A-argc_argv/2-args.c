#include <stdio.h>

/**
 * main - arguments it receives.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}

	return (0);
}
