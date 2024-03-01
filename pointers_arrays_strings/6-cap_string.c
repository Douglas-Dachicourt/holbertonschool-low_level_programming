#include "main.h"
#include "5-string_toupper.c"
/**
 * cap_string - fct qui met chaque premiere lettre d'un mot en majuscules
 * @s: la chane de caractère à traduire
 *
 *Return: s = le résultat souhaité
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (s[i - 1] == ' ' || s[i - 1] == '.' || s[i - 1] == '\n' ||
			s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '?' ||
			s[i - 1] == '!' || s[i - 1] == '"' || s[i - 1] == '(' ||
			s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
			{
				s[i] -= 32;
			} else if (s[i] >= 97 && s[i] <= 122 && s[i - 1] == '\t')
			{
			s[i] -= 32;
			}
		}
	}
	return (s);
}
