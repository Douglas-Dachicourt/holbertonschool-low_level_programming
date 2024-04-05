#include "main.h"
/**
 * flip_bits - fct which count number of differences between bytes of 2 int
 * @n: first int to compare
 * @m: second int to compare
 * Return: number of differences
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned long int count;

	diff = n ^ m;

	count = 0;

	while (diff > 0)
	{
		count = count + (diff & 1);
		diff = diff >> 1;
	}

return (count);

}
