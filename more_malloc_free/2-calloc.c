#include "main.h"
#include <stdlib.h>
#include "0-memset.c"
/**
 * _calloc - fct qui alloue de la mémoire pour un tableau
 * @nmemb: nombre d'éléments
 * @size: taille de chaque élément
 * Return: pointeur vers l'espace mémoire créé
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *array;

if (size == 0 || nmemb == 0)
	return (NULL);

array = malloc(size * nmemb);

if (array == NULL)
	return (NULL);

_memset(array, 0, size * nmemb);

return (array);
}
