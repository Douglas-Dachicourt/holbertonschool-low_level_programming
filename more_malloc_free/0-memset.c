#include "main.h"
/**
 * _memset - fct qui copie le nb d'octets d'une valeur dans un bloc mémoire
 * @s: le pointeur vers le bloc mémoir à remplir
 * @b: valeur à copier dans le bloc mémoire
 * @n: nombre d'octects à copier (octet par octet)
 * Return: s, qui est le bloc mémoire résultant rempli par les octets
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
