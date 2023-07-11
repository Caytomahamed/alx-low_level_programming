#include <stdlib.h>
/**
 * alloc_grid - allocates a 2D array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the new array, or NULL if allocation fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width == NULL || height == NULL)
		return (NULL);

	grid = malloc(sizeof(int *) * width);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * height);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
