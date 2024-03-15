#include <stdlib.h>
/**
 * _strdup - fct qui copie une string à l'identique usant de la mémoire dynam
 * @str: string à copier
 * Return: la nouvelle string copiée
 **/
char *_strdup(char *str)
{
	unsigned int i, j = 0;
	char *new_str;

	if (!str)
	{
		return (NULL);
	}

	while (str[j] != '\0')
	{
		j++;
	}

	new_str = malloc((j + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i] = '\0';

	return (new_str);
}

