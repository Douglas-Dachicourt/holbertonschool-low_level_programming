#include "main.h"
/**
 * _isalpha - fonction qui controle si le caractere est une lettre
 * @c: le caractere a tester
 *
 * Return: 1 si c est une lettre (maj ou min) sinon 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
