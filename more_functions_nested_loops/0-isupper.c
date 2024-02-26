#include "main.h"
/**
 * -isupper - fct qui vérifie si c est maj ou non
 * @c: le parametre testé
 *
 * Return: 1 si c'est une maj, 0 si ce n'est pas le cas
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
