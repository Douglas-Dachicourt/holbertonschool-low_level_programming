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
	int n = 0;
	int l = _strlen(s);
	int signe;
	int p = 0;
	int m = 0;

	for (i = 0; i <= (l - 1); i++)
	{
		if (s[i] == '+')
		{
			p++;
		} else if (s[i] == '-')
		{
			m++;
		}
		if (p > m || p == m){
			signe = 1;
		} else
		{
			signe = -1;
		}
		if (s[i] >= '0' && s[i] <= '9' && s[i] != ' ')
		{
			n = n * 10 + (s[i] - '0');
		}
	}
return (signe * n);
}
