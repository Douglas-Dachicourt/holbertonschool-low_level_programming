#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - fct qui recopie la string
 * @dest: pointeur de retour pour la copie recherchée
 * @src: source initiale à copier
 * Return: dest ; la valeur pointée de retour qui est la copie de src
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int l = _strlen(src);

	for (i = 0; i <= l; i++)
	{
		*(dest + i) = *(src + i);
	}
return (dest);
}
