#include "main.h"
#include <stddef.h>
/**
 * _strstr - fct qui recopie les caractères communs entre deux chaines
 * @haystack: la chaine de base
 * @needle: la chaine comparée à celle de base. On y copie les char présents
 * Return: la résultante needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

/* je parcoure la chaine source*/
	for (i = 0; haystack[i] != '\0'; i++)
	{
	/* je parcoure la chaine sub et src aux indice i et j pour comparaison*/
		for (j = 0; needle[j] != '\0' && haystack[i + j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
