#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
/**
 * print_strings - fct qui imprime des cdc en fct d'un séparateur et de son nb
 * @separator: séparateur à afficher (si non nul)
 * @n: le nb de cdc
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(args, char *);

		if (s != NULL)
		{
			printf("%s", s);
		} else
		printf("%s", "(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
va_end(args);
printf("\n");
}
