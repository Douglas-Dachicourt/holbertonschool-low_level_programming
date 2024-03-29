#include "main.h"
#include <stdlib.h>
/**
 * create_array - creation d'un tableau d'un char spécifique
 * @size: taille du tableau
 * @c: le char concerné
 * Return: un pointeur vers create_array
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *array;

	array = malloc(size);

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		if (c != '\0')
			array[i] = c;
	}
	array[size] = '\0';

	return (array);
}
