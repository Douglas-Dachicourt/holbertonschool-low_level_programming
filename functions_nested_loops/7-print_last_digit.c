#include "main.h"
/**
 * print_last_digit - imprime le dernier chiffre de l'entier
 * @n: parametre a tester
 *
 * Return: 0 si tout se déroule bien
 */
int print_last_digit(int n)
{
	int d, e, result;

	if (n >= 0)
	{
		d = n % 10;
		result = _putchar('0' + d);
		return (result);
	}
	else
	{
		n = -(n);
		e = n % 10;
		result = _putchar('0' + e);
		return (result);
	}
	return (0);
}
