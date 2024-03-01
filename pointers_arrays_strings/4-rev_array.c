#include "main.h"

/**
 * reverse_array - inverser les éléments du tab dans l'ordre décroissant
 * @a: tableau a inverser
 * @n: nb d'éléments
 *
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp = a[i];

		a[i] = a[j];

		a[j] = temp;
	}
}
