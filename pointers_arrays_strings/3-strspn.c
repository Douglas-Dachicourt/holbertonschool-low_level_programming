#include "main.h"
/**
 * _strspn - fct qui compte dans 's' les caractères présents dans accept
 * @s: chaine qui contient les caractères à compter présents dans accept
 * @accept: les caractères à trouver dans s
 *Return: le compte de char trouvés
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int total = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				total++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (total);
}
