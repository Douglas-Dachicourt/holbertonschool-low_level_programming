#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - imprime les nombre de n à 98
 * @n: entier de départ n choisi par l'utilisateur
 *
 * Return: 0 si tout se déroule bien
 */
void print_to_98(int n)
{
	int i, j;

	for (i = n; i <= 98; i++)
	{
		if (i <= 98)
		{
			printf("%d", i);

			if (i != 98)
			printf(", ");
		}
	}
	for (j = n; j >= 98; j--)
	{
		printf("%d", j);
		if (j != 98)
			printf(", ");
	}

	printf("\n");
}
