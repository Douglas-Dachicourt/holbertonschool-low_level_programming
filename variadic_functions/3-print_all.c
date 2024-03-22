#include <stdio.h>
#include <stdarg.h>

void p_i(int i)
{
	printf("%d", i);
}

void p_c(char c)
{
	printf("%c, ", c);
}

void p_f(float f)
{
	printf("%f, ", f);
}

void p_s(char *s)
{
	if (s == NULL)
	{
		printf("(nil)");
	} else
	{
		printf("%s, ", s);
	}
}

void print_all(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	if(format == NULL)
	{
		printf("(nil)\n");
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
