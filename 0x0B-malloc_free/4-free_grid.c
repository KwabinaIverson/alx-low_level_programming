#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2D created by alloc_grid
 * @grid: Int of grid
 * @height: Height to free
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
