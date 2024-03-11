#include "main.h"
#include <stdlib.h>
/**
 * str_concat - fct qui concatène deux str avec alloc dynamique
 * @s1: str 1
 * @s2: str 2
 * Return: pointeur vers le résultat
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, k, l;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/*je parcoure s1 pour connaitre sa longueur*/
	while (s1[i] != '\0')
	{
		i++;
	}
	/*je parcoure s2 pour connaitre sa longueur*/
	while (s2[j] != '\0')
	{
		j++;
	}
	/*j'alloue à mon nouvel espace mémoire les tailles de s1 et s2*/
	concat = malloc((i + j + 1));

	if (concat == NULL)
		return (NULL);
	/*je boucle sur s1 pour copier dans concat son contenu*/
	for (k = 0; s1[k] != '\0'; k++)
	{
		concat[k] = s1[k];
	}
	/*je boucle sur s2 pour ajouter à concat le contenu*/
	for (l = 0; s2[l] != '\0'; l++)
	{
		concat[k + l] = s2[l];
	}
	concat[k + l] = '\0';

return (concat);
}
