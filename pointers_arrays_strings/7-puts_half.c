#include "main.h"
#include "2-strlen.c"
/**
 * puts_half -
 * @str:
 *
 */
void puts_half(char *str)
{
	int l = _strlen(str);
	int i;
	int n = l / 2;

	for (i = n; i <= l; i++)
	{
		_putchar(*(str + i));
	}
_putchar('\n');
}
