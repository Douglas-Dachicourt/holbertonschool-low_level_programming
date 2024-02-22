#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - imprime le dernier chiffre de l'entier
 * @n: parametre a tester
 *
 * Return: 0 si tout se déroule bien
 */
int print_last_digit(int n)
{
	int d, result;

	d = _abs(n) % 10;

	if (n >= 0)
	{
		result = _putchar('0' + d);
		return (result);
	}
	else
	{
		result = _putchar('0' + d);
	}
	return (d);
}
