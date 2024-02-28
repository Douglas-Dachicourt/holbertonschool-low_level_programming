#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - fct qui inverse la string
 * @s: string a tester
 *
 */
void rev_string(char *s)
{
	int i, j;
	int l = _strlen(s);
	char temp;

		for (i = 0, j = l - 1; i < j; i++, j--)
		{
			{
				temp =  *(s + i);
				*(s + i) = *(s + j);
				*(s + j) = temp;
			}
		}
}
