#include "main.h"
#include "2-strlen.h"
/**
 * _strchr -
 * @s:
 * @c:
 * Return:
 */
char *_strchr(char *s, char c)
{
	int i;

	int l = _strlen(s);

	for (i = 0; i < l; i++)
	{
		if (s[i] == c)
		{
			s[i] += s[i + 1];
		}
	}
	return (s);
}
