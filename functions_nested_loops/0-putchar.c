#include <stdio.h>
#include <unistd.h>
#include <main.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - fonction obligatoire
 *
 * Return: 1 si tout se passe bien
 */
int main(void)
{
	_putchar();
	return (1);
}
