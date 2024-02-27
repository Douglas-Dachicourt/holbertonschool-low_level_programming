#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
/**
 * print_rev -
 * @s:
 *
 */
void print_rev(char *s)
{
	int l = _strlen(s);
	int i;

	for (i = l-1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
_putchar('\n');
}
