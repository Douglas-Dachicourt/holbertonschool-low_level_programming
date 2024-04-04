#include "main.h"
/**
 * binary_to_uint - fct which convert binary into dec int
 * @b: the string of char to convert
 * Return: the decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int num = 0;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num = b[i] - '0';
		dec = dec * 2 + (num);
		i++;
	}
	return (dec);
}
