#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - fct qui retourne la seconde moitié de string
 * @str: string parametre a tester
 *
 */
void puts_half(char *str)
{
	int l = _strlen(str) - 1;
	int i;
	int n = l / 2;

	for (i = n + 1; i <= l; i++)
	{
		_putchar(*(str + i));
	}
_putchar('\n');
}
