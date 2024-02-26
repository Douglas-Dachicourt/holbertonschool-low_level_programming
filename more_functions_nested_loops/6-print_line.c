#include "main.h"
/**
 * print_line - print des '_' n fois le parametre n
 * @n: parametre nombre de fois on imprime '_'
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');

		} else
			_putchar('_');
	}
	_putchar('\n');
}
