#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - additionner les nb des 2 diagonales dans un tab bi-dimens
 * @a: valeur du tab à matcher via l'index // a[0], a[4] etc ...
 * @size: nb d'éléments commun par ligne/colonne
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_1 = 0;
	int sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_1 += a[i * size + i];
		sum_2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, ", sum_1);
	printf("%d", sum_2);
	printf("\n");
}
/*
 * DIAGONALE GAUCHE
 * a[0 * 3 + 0] = a[0] = 0
 * a[1 * 3 + 1] = a[4] = 11
 * a[2 * 3 + 2] = a[8] = 102
 *
 * DIAGONALE DROITE
 * a[0 * 3 + (3 - 1 - 0)] = a[2] = 5
 * a[1 * 3 + (3 - 1 - 1)] = a[4] = 11
 * a[2 * 3 + (3 - 1 - 2)] = a[6] = 1000
 */
