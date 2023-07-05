#include "main.h"

/**
 * _strlen_recursion - get a length of string
 * @s: string we search it's length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	static int len;

	if (*s == '\0')
		return (0);
	len++;
	_strlen_recursion(s + 1);

	return (len);
}
