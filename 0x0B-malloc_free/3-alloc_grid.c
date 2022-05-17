#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width
 * @height: height
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * (width * height));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (j = 0; j < width; j++)
	{
		for (k = 0; k < height; k++)
			grid[j][k] = 0;
                putchar('\n');
	}
	return (grid);
}
