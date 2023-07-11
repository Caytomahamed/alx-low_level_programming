#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char
 *
 * @size: the size of the array to create
 * @c: the char to initialize the array with
 *
 * Return: a pointer to the created array, or NULL if the creation fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
	}

	return (NULL);
}
