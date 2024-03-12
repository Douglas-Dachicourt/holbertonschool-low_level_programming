#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - fct qui retourne un tableau 2D d'entiers
 * @width: lignes du tableau
 * @height: colonnes du tableau
 * Return: le tableau souhaité
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[i]);
			}
		}
	}
	return (array);
}
