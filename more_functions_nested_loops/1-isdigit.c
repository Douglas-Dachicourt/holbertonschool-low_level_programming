#include "main.h"
/**
 * _isdigit - fct qui vérifie si le parametre est un chiffre ou non
 * @c: parametre à vérifier
 *
 * Return: 1 si c'est un chiffre, 0 si ce n'est pas le cas
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
