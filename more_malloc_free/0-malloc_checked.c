#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - fct qui alloue de l'espace à une donnée, ret 98 si fail
 * @b: parametre d'allocation
 * Return: un pointeur vers le nouvel espace alloué
 */
void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);

	if (space == NULL)
		exit(98);
	return (space);
}
