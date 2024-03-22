#include <stdio.h>
#include <stdarg.h>
/**
 * p_i - fct qui imprime un int lors de son appel
 * @i: arg principal
 */
void p_i(int i)
{
	printf("%d", i);
}
/**
 * p_c - fct qui imprime un char lors de son appel
 * @c: arg principal
 */
void p_c(char c)
{
	printf("%c, ", c);
}
/**
 * p_f - fct qui imprime un float lors de son appel
 * @f: arg principal
 */
void p_f(float f)
{
	printf("%f, ", f);
}
/**
 * p_s - fct qui imprime une cdc lors de son appel
 * @s: arg principal
 */
void p_s(char *s)
{
	if (s == NULL)
	{
		printf("(nil), ");
	} else
	{
		printf("%s, ", s);
	}
}
/**
 * print_all - fct qui imprime tous les arg passés lors de son appel
 * @format: liste des arguments
 */
void print_all(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	while (*format != '\0')
	{
		switch (*format)
		{
			case 'c':
			p_c(va_arg(args, int));
			break;

			case 'i':
			p_i(va_arg(args, int));
			break;

			case 'f':
			p_f(va_arg(args, double));
			break;

			case 's':
			p_s(va_arg(args, char *));
			break;

			default:
			break;
		}
		format++;
	}
	va_end(args);
	printf("\n");
}
