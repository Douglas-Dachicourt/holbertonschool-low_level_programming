#include "main.h"
/**
 * clear_bit - fct which clear a byte to 0 at a wanted index
 * @n: number to test
 * @index: the index we want to modify the bit
 * Return: 1 if fct is success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_size = sizeof(unsigned long int) * 8;

	if (index >= bit_size)
		return (-1);

	*n = *n & ~(1 << index);

return (1);
}
