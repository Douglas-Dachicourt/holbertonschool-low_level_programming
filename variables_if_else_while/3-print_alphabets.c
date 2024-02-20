#include <stdio.h>
/**
 * main - fonction obligatoire
 *
 * Return: 0 si tout se déroule bien
 */
int main(void)
{
	char c, d;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
		putchar('\n');

	return (0);
}
