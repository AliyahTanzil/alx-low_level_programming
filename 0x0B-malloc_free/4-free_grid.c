#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free a 2 dimensional array
 * @grid: The 2-dimentional array
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}
