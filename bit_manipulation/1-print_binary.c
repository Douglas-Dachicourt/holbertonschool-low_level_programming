#include "main.h"
/**
 * print_binary - fct which prints out a binary from an integer
 *@n: the number to convert
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
_putchar ((n & 1) + '0');
}
