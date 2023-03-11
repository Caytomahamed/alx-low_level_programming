#include <stdio.h>

/**
 * print_times_table - print times table of @name
 * @n: is times table number to build
 *
 * Retrun: print times table
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n < 15 && n <= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int times = i * j;

				if (j == n)
					printf("%3d", times);
				else
					printf("%3d, ", times);

			}
			printf("\n");
		}
	}
}
