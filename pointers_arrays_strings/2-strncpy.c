#include "main.h"
#include "2-strlen.c"
/**
 * _strncpy - fct qui copie
 * @dest: chaine de destination ou l'on copie la source
 * @src: la source à copier
 * @n: le nombre de caractère à copier
 *
 * Return: dest - chaine de destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

/*je parcoure la source jusqu'à n (nb de char voulus) ou jusqu'au char nul*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
/*je copie dans dest les char souhaités (soit jusqu'à n)*/
		dest[i] = src[i];
	}
/*si la longueur de la source est < à n, je termine la boucle avec le '\0'*/
		for (; i < n; i++)
		{
			dest[i] = '\0';
		}

return (dest);
}
