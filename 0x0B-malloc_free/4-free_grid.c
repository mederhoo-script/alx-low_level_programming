#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2
 * @grid: grid
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
