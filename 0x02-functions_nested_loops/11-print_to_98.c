#include "main.h"
#include <stdio.h>
/**
 * print_to_98: print @n to 98
 * @n: start  this number to 98
 *
 * Retrun: print n to 98
 */

void print_to_98(int n)
{
	int number = 0;
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
			if(n < 0)
			{
				number = -n;

				if(number >= 10)
				{
					_putchar('-');
					_putchar((number / 10) + '0');
					_putchar((number % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else if(number < 10 && number >= 0) 
				{
					_putchar('-');
					_putchar(number + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');

				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (n >= 0 && n < 10)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');				
			}
			n++;
		}
	}
	_putchar('\n');
}
