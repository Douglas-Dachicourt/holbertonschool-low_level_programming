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
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n != 98)
			printf(", ");
		}
	} else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n != 98)
			printf(", ");
		}
	}
	printf("\n");
}
