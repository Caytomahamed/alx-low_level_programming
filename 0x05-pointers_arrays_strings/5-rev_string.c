#include <stdio.h>

/**
 * rev_string - reverse string
 * @s: string
 *
 *
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	int j = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
	}
}
