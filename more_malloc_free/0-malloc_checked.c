#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - fct qui alloue de l'espace à une donnée, retur 98 si fail
 * @b: parametre d'allocation
 * Return: un pointeur vers le nouvel espace alloué
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *space;

	space = malloc(sizeof(unsigned int) * b);

	if (space == NULL)
	{
		exit(98);
	}
	return (space);
}
