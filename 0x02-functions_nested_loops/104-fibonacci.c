#include <stdio.h>

/**
 * main - print Fibonacci sequence of numbers
 *
 * Description: This program prints the first 98 terms of
 * the Fibonacci sequence starting from 0 and 1.
 * Each term is printed on a new line.
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i = 0;
	int n1 = 0;
	int n2 = 1;
	int nextTerm;

	while (i <= 98)
	{
		printf("%d\n", n1);
		nextTerm = n1 + n2;
		n1 = n2;
		n2 = nextTerm;
		i++;
	}

	printf("\n");
	return (0);
}
