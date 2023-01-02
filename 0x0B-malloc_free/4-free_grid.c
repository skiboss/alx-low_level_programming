#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2D grid previously created
 * @grid: grid created previously
 * @height: height of the grid
 * Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
