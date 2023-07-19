#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to search
 * @size: the size of the array
 * @cmp: the function to use to compare elements
 *
 * Return: the index of the first element for which cmp returns non-zero,
 *         or -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			index = cmp(array[i]);

			if (index != 0)
				return (i);
		}
	}

	return (-1);
}
