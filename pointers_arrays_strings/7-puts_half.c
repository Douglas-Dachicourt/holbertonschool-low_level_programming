#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - fct qui retourne la seconde moitié de string
 * @str: string parametre a tester
 *
 */
void puts_half(char *str)
{
	int l = _strlen(str);
	int i;
	int n = l / 2;
	int m = l % 2;

	for (i = n; i <= l; i++)
	{
		if (m == 0)
			_putchar(*(str + i));
	}
_putchar('\n');
}
