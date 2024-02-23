#include "main.h"
/**
 * times_table - fonction multiply tables
 * @i: parametre 1
 * @j: parametre 2
 */
void times_table(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		int m = i * j, c = m / 10, d = m % 10;

		if (m > 9)
			_putchar('0' + c);

		_putchar('0' + d);

		if (j < 9)
			_putchar(',');

	    	if ((i == 2 && j < 4) || (i == 3 && j < 3) ||
			((i == 0 || i == 1) && (j < 9)) || (i == 4 && j < 2) || (j < 1))
		{
			_putchar(' ');
			_putchar(' ');

		} else if
		((i == 2 && j >= 4 && j < 9) || (i == 3 && j >= 3 && j < 9) ||
		(i == 4 && j >= 2 && j < 9))
		{
			_putchar(' ');
		} else
		{
			if (j >= 1 && j < 9)
			_putchar(' ');
		}
	}
	_putchar('\n');
}
}
