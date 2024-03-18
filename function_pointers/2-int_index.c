#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - fct qui passe en prmt une autre fct qui chk les int
 * @array: tableau d'int à check
 * @size: la taille du tableau
 * @cmp: la fct prmtr qui compare les int
 * Return: -1 si aucun élément ne match; l'index si l'élément match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size ; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
