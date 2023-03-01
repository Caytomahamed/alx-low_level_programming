#include "main.h"
/**
 * pirnt_sing - check number is positve, zero or negative
 *@n - the number to be checked 

 * this function check the weather of a number if it is a positive return (+),
 * if is a zero return (0)and if it is a negative reaturn (-)
 *
 *Retrun: (+) if the @n greater then 0, 
 *         (-) if the @n is less then zero
 *         .(0)otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return  (0);
	}
	else
	{
		_putchar('-');	
		return (-1);
	}

	return (0);
}


