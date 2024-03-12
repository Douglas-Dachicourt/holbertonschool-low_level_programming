#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - fct qui concatène deux string en memoire dynamique
 * @s1: string 1
 * @s2: string 2
 * @n: le nombre de caractere de s2 à concaténer
 * Return: le résultat, pointeur vers le nouvel espace alloué
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k, l;
	char *new_string;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	new_string = malloc((i + j + 2));

	if (new_string == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
	{
		new_string[k] = s1[k];
	}
	for (l = 0; s2[l] != '\0' && l < n; l++)
	{
		new_string[k + l] = s2[l];
	}
	new_string[k + l] = '\0';

return (new_string);
}
