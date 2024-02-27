#include "main.h"
#include <stdio.h>
/**
 * _strlen - fct qui retourne la longueur d'une string
 * @s: la chaine de caractere ou string a test
 *
 * Return: le compteur i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
return (i);
}
