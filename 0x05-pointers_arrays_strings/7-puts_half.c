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
	int n;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}

	_putchar('\n');
}
