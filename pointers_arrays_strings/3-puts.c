#include "main.h"
/**
 * _puts - fct qui reproduit la fct puts
 * @str: string a imprimer
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
_putchar('\n');
}
