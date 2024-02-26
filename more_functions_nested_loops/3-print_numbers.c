#include "main.h"
/**
 * print_numbers - fct qui imprime les chiffres de 0 à 9
 *
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
