#include "main.h"
/**
 * _puts_recursion - print string
 *@s: string to print
 *
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
		_puts_recursion(s);

	if (*s == '\0')
		_putchar('\n');
}
