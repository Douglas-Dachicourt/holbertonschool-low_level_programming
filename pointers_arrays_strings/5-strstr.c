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

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
			{
				return (&needle[i]);
			}
		}
		return (NULL);
	}
	return (needle);
}
