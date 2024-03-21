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
int i = 0;

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

	while (temp[i] != '\0')
	{
		int j = 0;

		while (choice[j].type != NULL)
		{
			if (choice[j].type[0] == temp[i])
			{
				void *arg = va_arg(args, void *);
				choice[j].f(arg);
				printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

