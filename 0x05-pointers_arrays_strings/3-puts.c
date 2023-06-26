#include "main.h"
/**
 * _puts - stdout
 * @str: string print
 *
 *
*/
void _puts(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
