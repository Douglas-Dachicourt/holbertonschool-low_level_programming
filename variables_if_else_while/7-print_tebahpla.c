#include <stdio.h>
/**
 * main - fonction obligatoire
 *
 * Return: 0 si tout se passe bien
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
