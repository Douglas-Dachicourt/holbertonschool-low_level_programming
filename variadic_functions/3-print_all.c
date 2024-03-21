#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - fct qui imprime les argmts en fct de leur type de format
 * @format: le format spécifié à respecter
 */
void print_all(const char * const format, ...)
{
	const char *temp = format;

	va_list args;

	va_start(args, format);

	while (*temp)
	{
		if (*temp == 'i')
		{
			int i = va_arg(args, int);

			printf("%d", i);

		} else if (*temp == 'c')
		{
			char c = (char)va_arg(args, int);

			printf("%c", c);

		} else if (*temp == 's')
		{
			char *s = va_arg(args, char *);

			if (s != NULL)
				printf("%s", s);

		} else if (*temp == 'f')
		{
			float f = (float)va_arg(args, double);

			printf("%f", f);
		}
		temp++;
	}
	va_end(args);
	printf("\n");
}
