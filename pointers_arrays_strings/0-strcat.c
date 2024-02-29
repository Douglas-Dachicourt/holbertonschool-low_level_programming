#include "main.h"
#include "2-strlen.c"
/**
 * _strcat - concaténer une chaine source a une chaine destinataire
 * @dest: la valeur (string) de retour à afficher
 * @src: la valeur (string) initiale a ajouter a dest
 *
 * Return: retour via le pointeur dest
 */
char *_strcat(char *dest, char *src)
{
	int len_src = _strlen(src);
	int i, j;

	/*je cherche la fin du caractère de la chaine de destination*/
	for (i = 0; dest[i] != '\0'; i++)
	;

	/*je parcoure la chaine source dans sa longueur*/
	for (j = 0; j <= len_src; j++)
	{
	/*je copie à partir du '\0' de i, ma chaîne source*/
		dest[i] = src[j];
	/*on incrémente i pour placer les caractères de j au bon index */
		i++;
	}

	return (dest);
}
