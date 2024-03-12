#include "main.h"
#include <stdlib.h>
/**
 * free_grid -
 * @grid:
 * @height:
 */
void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; i < j; j++)
		{
			free(grid[i]);
			free(grid[j]);
		}
	}
}
