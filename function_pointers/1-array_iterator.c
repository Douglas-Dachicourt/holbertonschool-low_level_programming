#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator -fct qui exec 1 fct en prmtr sur chq element d'1 tableau
 * @array: tableau d'éléments à afficher
 * @size: taille du tableau
 * @action: fct en prmtr qui execute le code
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
