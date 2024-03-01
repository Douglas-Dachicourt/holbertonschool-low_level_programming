#include "main.h"
/**
 * _strncat - fct qui
 * @dest: la chaine de destination souhaitée
 * @src: la chaine source a concatner a dest
 * @n: le nombre de caractere de la chaine source à concatener
 *
 * Return: dest = la chaine de destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

/*je parcoure la première chaine de destination jusqu'au char '\0'*/
	for (i = 0; dest[i] != '\0'; i++)
	;
/*
 *je parcoure la chaine source jusqu'au nb de caractères n voulu
 * et jusqu'au caractère '\0' afin d'être sûr de m'y arrêter
 */
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
/*
 *j'ajoute à partir de dest[i] = '\0' mes char n de src / le tout a partir
 * de dest[j] index 0 . D'où la combinaison dest[i + j]
 */
		dest[i + j] = src[j];
	}

return (dest);
}
