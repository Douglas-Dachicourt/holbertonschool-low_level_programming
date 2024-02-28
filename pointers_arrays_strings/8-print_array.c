#include "main.h"
#include <stdio.h>
/**
 * print_array - fct qui retour les elements d'un tableau donné
 *@a: parametre tableau a envoyer
 *@n: nb d'éléments du tableau
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
