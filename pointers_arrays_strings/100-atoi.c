#include "main.h"
#include "2-strlen.c"
/**
 * _atoi -
 * @s:
 *
 *
 */
int _atoi(char *s)
{
	int i;
	int n = 0;
	int l = _strlen(s);

	for (i = 0; i <= (l - 1); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0');
		}
	}
return (n);
}
