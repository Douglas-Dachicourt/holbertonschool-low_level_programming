#include "main.h"
/**
 * jack_baueur - fonction qui énumère les minutes en 24H
 *
 *
 */
void jack_bauer(void)
{
int i;
char c;

for (i = 0; i < 60; i++)
{
	_putchar('\n');

	for (c = 48; c <= 53; c++)
	{
		_putchar(c);
	}
}

}
