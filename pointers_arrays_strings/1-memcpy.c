#include "main.h"
/**
 * _memcpy - fct qui copie le nb d'octect d'une valeur source vers un bloc dest
 * @dest: le bloc mémoire de destination
 * @src: le bloc src avec les valeurs à copier
 * @n: nb d'octect de src à copier
 * Return: dest, le bloc de destination avec les octets copiés depuis src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
return (dest);
}
