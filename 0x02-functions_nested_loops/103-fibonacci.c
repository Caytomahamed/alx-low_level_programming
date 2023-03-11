#include <stdio.h>

/**
 * main - print fibonacci sequence start 1 and 2
 *
 *  Return: The sum of fibonacci sequence less then 4000000
 */

int main(void)
{
	int i;
	int n1, n2, nextTerm, sum;

	n1 = 1;
	n2 = 2;

	for (i = 1; i < 33; i++)
	{
		if (n2 < 4000000 && (n2 % 2 == 0))
			sum += n2;
		nextTerm = n1 + n2;
		n1 = n2;
		n2 = nextTerm;
	}

	printf("%d\n", sum);
	return (0);
}

