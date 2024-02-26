#include "main.h"
/**
 * print_triangle - triangle de #
 * @size: parametre de la fct
 *
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (j <= i + 1)
			{
				_putchar('#');
			} else
			{
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
