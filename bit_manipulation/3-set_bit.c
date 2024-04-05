#include "main.h"
/**
 * set_bit - fct which set a bit to 1 at wanted index
 * @n: number to test
 * @index: index to set the value 1
 * Return: 1 if the fct returns well, -1 if it does not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_size = sizeof(unsigned long int) * 8;

	if (index >= bit_size)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
