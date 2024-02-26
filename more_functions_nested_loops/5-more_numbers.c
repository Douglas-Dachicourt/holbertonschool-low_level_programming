#include "main.h"
/**
 * more_numbers - fct qui imprime 10 fois les chiffres de 0 à 14
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			int d = j / 10;
			int m = j % 10;

			_putchar('0' + d);
			_putchar('0' + m);
		}
	_putchar('\n');
    }
}
