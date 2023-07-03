#include "main.h"
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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if(c == '\0')
		return (s);

	return (NULL);
}
