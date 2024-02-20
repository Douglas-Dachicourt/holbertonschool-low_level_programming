#include <stdio.h>
/**
 * main - fonction obligatoire
 *
 * Return: 0 si tout se passe bien
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
		putchar('\n');

	return (0);
}

