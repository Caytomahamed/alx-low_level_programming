#include <stdio.h>

/**
 * main - print sum of multiples of 3 or 5 less then 1024
 *
 * Return: multiples 3 0r 5 below 1024
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum += i;
		if (i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
