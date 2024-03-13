#include "main.h"
#include <stdlib.h>
/**
 * array_range - créer un tableau pour y intégrer des int (min à max)
 * @min: int minimum
 * @max: int maximum
 * Return: le pointeur vers le tableau crée
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size && min <= max; i++)
	{
		array[i] = min + i;
	}
return (array);
}
