#include "main.h"

/**
 * _strspn - find the length of the initial segment of a string that
 * consists entirely of characters from a specified set of characters
 *
 * @s: scans the initial segment of the string s and
 * @accept: that consists entirely of characters from the string accept.
 *
 * Return: the length of the longest prefix of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int z = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
	return (z);
}
