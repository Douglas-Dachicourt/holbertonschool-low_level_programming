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
	int i;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	/*j'alloue de la mémoire pour le tableau de pointeurs des lignes*/
	array = malloc(width * sizeof(int *));

	if (array == NULL)
		return (NULL);
	/*je boucle sur ma longeur de ligne*/
	for (i = 0; i < width; i++)
	{
		/*j'alloue de la mémoire pour les colonnes par ligne et par case*/
		array[i] = malloc(height * sizeof(int));

		if (array[i] == NULL)
		{
			free(array[i]);
		}
	}
	return (array);
}
