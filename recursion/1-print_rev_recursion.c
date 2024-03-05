#include "main.h"
/**
 * _print_rev_recursion - fct qui imprime une string a l'envers
 * @s: string à imprimer
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
