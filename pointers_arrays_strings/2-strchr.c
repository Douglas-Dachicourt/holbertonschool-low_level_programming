#include "main.h"
#include <stddef.h>
/**
 * _strchr - fct qui imprime les char à partir de la 1ère occurence voulue
 * @s: chaine de char à tester
 * @c: imprimer à partir de ce char (1ère occurence)
 * Return: le résultat souhaité via le pointeur s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);

		i++;
	}
	return (NULL);
}
