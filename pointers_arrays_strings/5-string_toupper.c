#include "main.h"
#include "2-strlen.c"
/**
 * string_toupper - transformer les lettres minuscules en majuscules
 * @s: string a transformer
 *
 *Return: O car tout va bien
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
