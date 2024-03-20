#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - fct capable tout imprimer en arguments
 * @format: liste des arguments passés à la fonction
 * Return: nothing
 */
struct list_types
{
	char type;
	union
	{
	char c;
	int num;
	float f;
	char *s;
	} value;
};

void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);



}
