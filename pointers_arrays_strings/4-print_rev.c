#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - imprimer une string a l'envers
 * @s: parametre teste
 *
 */
void print_rev(char *s)
{
	int l = _strlen(s);
	int i;

	for (i = (l - 1); i >= 0; i--)
	{
		_putchar(*(s + i));
	}
_putchar('\n');
}
