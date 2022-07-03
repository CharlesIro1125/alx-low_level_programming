#include <stdlib.h>
#include "main.h"
/**
 * free_grid - A function that frees the
 * 2 dimensional array
 * @grid: a pointer to a pointer
 * @height: the height of the pointer
 */
void free_grid(int **grid, int height)
{
	int p;

	for (p = 0; p < height; p++)
		free(grid[p]);
	free(grid);
}
