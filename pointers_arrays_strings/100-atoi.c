#include "main.h"
#include "2-strlen.c"
/**
 * _atoi - fct qui transforme une chaine de caractere en entier
 * @s: string à convertir
 *
 * Return: la valeur de l'entier recherché
 */
int _atoi(char *s)
{
	int i;
	unsigned int n = 0;
	int l = _strlen(s);
	int signe = 1;
	int m = 0;
	int result;

	for (i = 0; i <= (l - 1); i++)
	{
		if (s[i] == '-')
		{
			m++;
			signe *= -1;

		} else if ((s[i] >= '0' && s[i] <= '9'))
		{
			n = ((n * 10) + (s[i] - '0'));
		} else {
			break;
		}
	}
result = signe * n;

return (result);
}
