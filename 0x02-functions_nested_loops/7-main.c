#include <limits.h>
#include "main.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	
	print_last_digit(INT_MIN);
	
	print_last_digit(8);
	print_last_digit(-2147483648);
	_putchar('\n');
	return (0);
}
