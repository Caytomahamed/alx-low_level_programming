#include "main.h"
/**
 * print_rev - print reverse
 * @s: string print
 *
 *
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len; i >= 1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
