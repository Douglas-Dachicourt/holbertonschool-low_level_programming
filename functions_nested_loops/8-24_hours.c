#include "main.h"
#include "stdio.h"
/**
 * jack_bauer - fonction qui énumère les minutes en 24H
 *
 *
 */
void jack_bauer(void)
{

char b, c;
char d, u;

for (b = '0'; b < '3'; b++)
{
	for (c = '0'; c < '4'; c++)
	{
		for (d = '0'; d <= '5'; d++)
	{
		for (u = '0'; u <= '9'; u++)
		{
			_putchar(b);
			_putchar(c);
			_putchar(':');
			_putchar(d);
			_putchar(u);
			_putchar('\n');
		}
	}

	}
}
}
