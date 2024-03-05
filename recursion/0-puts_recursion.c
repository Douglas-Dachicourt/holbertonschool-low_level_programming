#include "main.h"
/**
 * _puts_recursion - fct qui recrée la fct 'puts' en utilisant la récursion
 * @s: string à imprimer
 *
 */
void _puts_recursion(char *s)
{
	/*cas de base*/

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/*j'imprime *s en partant de s[0]*/

	_putchar(*s);
	/*appel de la fonction pour répéter l'impression lettre par lettre*/

	_puts_recursion((s + 1));
}
