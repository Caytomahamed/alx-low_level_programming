#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: a pointer to the new copy of the string, or NULL if allocation fails
 */
char *_strdup(char *str)
{
	unsigned int len = 0;
	char *new_copy, *copy_start;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		++len;

	new_copy = malloc(sizeof(char) * (len + 1));

	if (new_copy)
	{
		copy_start = new_copy;

		while (*str != '\0')
			*new_copy++ = *str++;

		*new_copy = '\0';
		return (copy_start);
	}

	return (NULL);
}
