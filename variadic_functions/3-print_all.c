#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

typedef struct
{
	char *type;
	void (*f)(void *);
} t_def;

void p_f(void *print)
{
	float f = *(float*)print;
	printf("%f", f);
}

void p_c(void *print)
{
	char c = *(char *)print;
	printf("%c", c);
}

void p_int(void *print)
{
	int num = *(int *)print;
	printf("%d", num);
}

void p_word(void *print)
{
	char *cdc = (char *)print;
	printf("%s", cdc);
}

void print_all(const char * const format, ...)
{
const char *temp = format;

	t_def choice[] =
	{
		{"c", p_c},
		{"f", p_f},
		{"s", p_word},
		{"i", p_int},
		{NULL, NULL}
	};

	va_list args;
	va_start(args, format);

	while (*temp)
	{
		int i = 0;

		while (choice[i].type != NULL)
		{
			if (choice[i].type == temp)
			{
				void *arg = va_arg(args, void *);
				choice[i].f(arg);
				break;
			}
			i++;
		}
		temp++;
	}
	va_end(args);
	printf("\n");
}
