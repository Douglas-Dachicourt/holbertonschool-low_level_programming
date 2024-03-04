#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - fct qui recopie les occurences de s a partir de accept
 * @s: la chaine à afficher ssi les occurences de accept sont présentes
 * @accept: les occurences à rechercher dans s
 * Return: s, la résultante
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
	return (s);
}
