#include "main.h"
#include <stdlib.h>
/**
 * free_grid - fct qui libere la mémoire dun tableau 2D
 * @grid: tableau 2D
 * @height: hauteur du tableau
 */
void free_grid(int **grid, int height)
{
	int i;
	/*je libère la mémoire de chaque ligne de mon tableau*/
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	/*je libère la mémoire de mon tableau de pointeurs*/
	free(grid);
}
