#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory block to be allocated
 *
 * Return: pointer to the allocated memory
 *         exit with status value of 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *check;
	check = malloc(b);

	if (check == NULL)
		return (98);

	return (check);
}
