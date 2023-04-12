#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer of 2D array
 * @width: The width of the array
 * @height: The height of the array
 * Return: 2D array
 */
int **alloc_grid(int width, int height)
{
int i, j, **grid;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = calloc(width, sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
}
return (grid);
}
