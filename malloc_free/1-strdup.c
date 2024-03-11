#include "main.h"
#include <stdlib.h>
/**
 * _strdup - fct qui copie une string à l'identique usant de la mémoire dynam
 * @str: string à copier
 * Return: la nouvelle string copiée
 **/
char *_strdup(char *str)
{
	int i;
	char *new_str;

	new_str = malloc(sizeof(str));

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

