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
int *grid, j, k, init = 0;

if (width <=0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int) * (width * height));

if (grid == NULL)
return (NULL);
free(grid);

for (j = 0; j < w; j++)
{
for (k = 0; k < h; k++)
grid[j][k] = init;
}
return (grid);
}
