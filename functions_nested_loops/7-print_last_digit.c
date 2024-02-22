#include "main.h"
#include "6-abs.c"
#include <stdlib.h>
/**
 * print_last_digit - imprime le dernier chiffre de l'entier
 * @n: parametre a tester
 *
 * Return: 0 si tout se déroule bien
 */
int print_last_digit(int n)
{
	int d;

	d = _abs(n % 10);

	_putchar('0' + d);

	return (d);

}
