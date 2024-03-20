#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - fct qui retourne la somme de tous les int passés en arg
 * @n: int
 * Return: la somme souhaitée
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int somme = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		somme = somme + va_arg(args, const unsigned int);
	}
	va_end(args);

	return (somme);
}
