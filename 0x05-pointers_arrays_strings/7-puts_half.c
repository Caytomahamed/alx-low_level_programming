#include "main.h"
/**
 * puts_half - stdout
 * @str: string print
 *
 *
 */
void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
