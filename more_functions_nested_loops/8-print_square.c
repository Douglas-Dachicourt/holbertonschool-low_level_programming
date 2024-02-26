#include "main.h"
/**
 * print_square - print autant de square en hor et en vert avec char #
 * @size: parametre
 *
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size == 0 || size < 0)
				_putchar('\n');

			_putchar('#');
		}
	_putchar('\n');
	}
}
