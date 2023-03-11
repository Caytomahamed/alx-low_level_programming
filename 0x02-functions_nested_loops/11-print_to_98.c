#include "main.h"

/**
 * print_to_98: print @n to 98
 * @n: start  this number to 98
 *
 * Retrun: print n to 98
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n >= 100)
			{

				_putchar((n / 100) + '0');
				_putchar(((n / 10) % 10) + '0');
				_putchar((n % 10) + '0');

				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');

				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}

			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			if (n >= 10 || n < 0)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');

				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
		        {	
				_putchar(n + '0');

				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			n++;
		}
	}
	_putchar('\n');
}
