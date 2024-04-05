#include "main.h"
/**
 * get_bit - fct which give the value of a bit with a known index
 * @n: number to test
 * @index: index of the value to find
 * Return:
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_size = sizeof((unsigned long int) n);
	unsigned long int i;

	if (index == 0)
		return (0);

	if (!index)
		return (-1);

	for (i = 0; i < bit_size - 1; i++)
	{
		if (index == i)
		{
			return (i);
		}
	}
	return (1);
}
