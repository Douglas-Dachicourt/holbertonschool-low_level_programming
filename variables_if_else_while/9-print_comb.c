#include <stdio.h>
/**
 * main - fonction obligatoire
 *
 * Return: 0 si tout se passe bien
 */
int main(void)
{
	int i, j = 44, k = 36, r = 32;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		
		if (i >= 48 && i <= 56)
		{
			putchar(j);
			putchar(r);
		}
	}
	putchar('\n');

	return (0);
}
