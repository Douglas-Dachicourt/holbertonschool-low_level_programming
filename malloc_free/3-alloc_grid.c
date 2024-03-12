#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -
 * @width:
 * @height:
 * Return:
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int*));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			return (NULL);
		}
	}
	return (array);
}
