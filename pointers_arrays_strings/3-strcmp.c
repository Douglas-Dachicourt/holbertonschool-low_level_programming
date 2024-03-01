#include "main.h"
#include "2-strlen.c"
/**
 * _strcmp - fct qui compare deux chaines de char entre elles
 * @s1: premiere chaine de char a tester
 * @s2: deuxieme chaine de char a tester
 *
 *Return: valeur + si s1>s2, valeur - si s1 < s2, sinon valeur nulle
 */
int _strcmp(char *s1, char *s2)
{
	int value, i, j;


	for (i = 0; s1[i] != '\0'; i++)
	;

	for (j = 0; s2[j] != '\0'; j++)
	{

	if (*s1 > *s2)
	{
		value = *s1 - *s2;

	} else if (*s1 < *s2)
	{
		value = -*s2 + *s1;

	} else
	{
		value = 0;
	}
	}

return (value);
}
