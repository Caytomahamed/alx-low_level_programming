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
	int start;

	while (str[len] != '\0')
	{
		len++;
	}

	start = len / 2;
	if (len % 2 == 1)
	{
		start = (len - 1) / 2;
	}

	for (i = start + 1; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
