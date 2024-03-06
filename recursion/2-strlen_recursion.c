#include "main.h"
/**
 * _strlen_recursion - fct qui calcule la longueur d'une chaine
 * @s: string à tester
 * Return: l'appel récursive
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
