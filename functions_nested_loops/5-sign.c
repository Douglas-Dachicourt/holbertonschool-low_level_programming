#include "main.h"
/**
 * print_sign - indique le signe du chiffre teste
 * @n: le chiffre teste
 *
 * Return: 1 si n>0, 0 si n=0, 0 si n<0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
