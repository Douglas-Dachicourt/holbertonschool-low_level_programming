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
	int i;
	int len = _strlen(dest);

	for (i = 0; i <= len; i++)
	{
		if (dest[i] == '\0')
			dest[i] = dest[i] + src[i] + '\0';

}
	return (dest);
}
