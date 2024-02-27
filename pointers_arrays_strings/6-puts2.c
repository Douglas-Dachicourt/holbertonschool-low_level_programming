#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - fct qui imprime un caractere sur deux
 * @str: string parametre a tester
 *
 */
void puts2(char *str)
{
	int i;

	int l = _strlen(str);

	for (i = 0; i <= (l - 1); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
_putchar('\n');
}
