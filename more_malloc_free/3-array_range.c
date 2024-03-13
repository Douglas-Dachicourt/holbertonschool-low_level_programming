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
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		array[i] = min + i;
	}
return (array);
}
