#include <stdio.h>
/**
 * _strchr -  is used to find the first occurrence of a character
 * in a null-terminated string.
 * @s: A pointer to a null-terminated string to search.
 * @c: An integer value representing the character to search for.
 *
 * Return: A pointer if c is found otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int len;
	int index;
	int n;

	len = 0;
	n = 0;
	index = -1;

	/*Calculte the length of string*/
	while (s[len] != '\0')
		len++;

	/*find index of character of c*/
	while (n < len)
	{
		if (s[n] == c)
		{
			index = n;
			break;
		}
		n++;
	}

	/*if character is not found return NULL*/
	if (index == -1)
		return (NULL);

	return (s + index);
}
