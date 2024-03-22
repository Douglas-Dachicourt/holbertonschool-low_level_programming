#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct
{
	char *type;
	void (*f)(void *);
} v2;

void p_int(void *print)
{
	int i = *(int *)print;
	printf("%d", i);
}
void p_c(void *print)
{
	char c = *(char *)print;
	printf("%c", c);
}
void p_f(void *print)
{
	float f = *(float *)print;
	printf("%f", f);
}
void p_s(void *print)
{
	char *s = (char *)print;
	printf("%s", s);
}

void print_all(const char * const format, ...)
{
    const char *temp = format;

    v2 choice[] =
    {
        {"c", p_c},
        {"i", p_int},
        {"s", p_s},
        {"f", p_f},
        {NULL, NULL}
    };

    va_list args;
    va_start(args, format);

    while (*temp)
    {
        int i = 0;
        while (choice[i].type != NULL)
        {
            if (choice[i].type[0] == *temp)
            {
                if (choice[i].type[0] == 'c') {
                    char arg = va_arg(args, int);
                    choice[i].f(&arg);
					printf(", ");
                } else if (choice[i].type[0] == 'i') {
                    int arg = va_arg(args, int);
                    choice[i].f(&arg);
                } else if (choice[i].type[0] == 's') {
                    char *arg = va_arg(args, char *);
                    choice[i].f(arg);
					printf(", ");
                } else if (choice[i].type[0] == 'f') {
                    double arg = va_arg(args, double);
                    choice[i].f(&arg);
					printf(", ");
                }
                break;
            }
            i++;
        }
        temp++;
    }
    va_end(args);
    printf("\n");
}
