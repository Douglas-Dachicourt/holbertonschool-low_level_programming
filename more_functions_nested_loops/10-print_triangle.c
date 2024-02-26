#include "main.h"
/**
 * print_triangle -
 *
 *
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = (size - i); j > 0; j--)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
