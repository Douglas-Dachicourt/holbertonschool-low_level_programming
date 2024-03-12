#include "main.h"
#include <stdlib.h>
/**
 * free_grid - fct qui libere la mémoire dun tableau 2D
 * @grid: tableau 2D
 * @height: hauteur du tableau
 */
void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i; j++)
		{
			grid[i][j] = 0;
		}
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
