#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i = 1;
	long int n1 = 1;
	long int n2 = 2;
	long int nextTerm;

	while (i <= 50)
	{
		if (i != 50)
			printf("%lu, ", n1);
		else
			printf("%lu", n1);

		nextTerm = n1 + n2;
		n1 = n2;
		n2 = nextTerm;
		i++;
	}

	printf("\n");
	return (0);
}
