#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print last digit of a number 
 * @n: check number 
 *
 *Return: lasdigit of the number
 */ 

int print_last_digit(int n)
{
	int a;

	if( n < 0)
		n = -n;

	a  = n % 10;

	_putchar(a + '0');
	return a;
}