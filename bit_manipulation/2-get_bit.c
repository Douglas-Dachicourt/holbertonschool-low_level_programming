#include "main.h"
/**
 * get_bit - fct which give the value of a bit with a known index
 * @n: number to test
 * @index: index of the value to find
 * Return: value of the bit a the specified index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_size = sizeof(unsigned long int) * 8;

	if (index >= bit_size)
		return (-1);

	return (n >> index & 1);
}
