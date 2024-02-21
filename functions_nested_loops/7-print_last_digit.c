#include "main.h"
/**
 * print_last_digit - imprime le dernier chiffre de l'entier
 * @r: parametre a tester
 *
 * Return: 0 si tout se déroule bien
 */
int print_last_digit(int n)
{
	int d;

	if (n > 0)
	{
		d = n % 10;
		return (_putchar('0' + d));
	} else if (n < 0)
	{
		n = -(n);
		d = n % 10;
		return (_putchar('0' + d));
	} else
		return (_putchar('0'));

	return (0);
}

