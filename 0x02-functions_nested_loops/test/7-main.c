#include "main.h"

/**
 * main - check the code 
 *
 * Return: always 0
 */

int main()
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);

	_putchar('0' + r);
	_putchar('\n');

	return 0;
}