#include "main.h"
#include "2-strlen.c"
/**
 * _memcpy - fct qui copie le nb d'octect d'une valeur source vers un bloc dest
 * @dest: le bloc mémoire de destination
 * @src: le bloc src avec les valeurs à copier
 * @n: nb d'octect de src à copier
 * Return: dest, le bloc de destination avec les octets copiés depuis src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		unsigned int temp = dest[i];
		dest[i] = src[i];
		src[i] = temp;
	}
return (dest);
}
