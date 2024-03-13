#include "main.h"
#include <stdlib.h>
/**
 * _calloc - fct qui alloue de la mémoire pour un tableau
 * @nmemb: nombre d'éléments
 * @size: taille de chaque élément
 * Return: pointeur vers l'espace mémoire créé
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *array;

	if (size == 0 || nmemb == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (((nmemb * size)/ size) != nmemb)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		array[i] = 0;

	return (array);
}
