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
	unsigned long int n1, n2, nextTerm;

	n1 = 1;
	n2 = 2;

	while (i <= 98)
	{
		printf("%lu, ", n1);

		nextTerm = n1 + n2;
		n1 = n2;
		n2 = nextTerm;
		i++;
	}

	printf("\n");
	return (0);
}
