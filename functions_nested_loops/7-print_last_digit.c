#include "main.h"
/**
 * print_last_digit - imprime le dernier chiffre de l'entier
 * @r: parametre a tester
 *
 * Return: 0 si tout se déroule bien
 */
int print_last_digit(int r)
{
	int d;

	if (r > 0)
	{
		d = r % 10;
		return (_putchar('0' + d));
	}
	if (r == 0)
	{
		return (_putchar('0' + r));
	}
	if (r < 0)
	{
		r = -r;
		d = r % 10;
		return (_putchar('0' + d));
	}
	return (0);
}



