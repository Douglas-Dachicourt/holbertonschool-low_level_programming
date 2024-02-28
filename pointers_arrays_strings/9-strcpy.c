#include "main.h"
#include "2-strlen.c"
#include "_putchar.c"
/**
 * _strcpy - fct qui recopie la string
 * @dest: pointeur de retour pour la copie recherchée
 * @src: source initiale à copier
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int l = _strlen(src);

	for (i = 0; i <= l; i++)
	{
		dest = src;

		_putchar(*(dest + i));
	}
return (dest);
}
