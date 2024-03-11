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
	/*déclaration de nos variable*/
	unsigned int i;
	char *array;

	/*on verifie si la taille du tableau n'est pas égale à 0*/
	if (size == 0)
	{
		return (NULL);
	}

	/*on alloue de la mémoire pour notre initialisation de tableau*/
	array = malloc(size + 1);

	/*on vérifie que cette allocation n'est pas nulle*/
	if (array == NULL)
	{
		return (NULL);
	}

	/*on initialise notre caractère à chq tour de boucle*/
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
