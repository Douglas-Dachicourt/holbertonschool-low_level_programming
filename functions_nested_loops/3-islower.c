#include "main.h"
/**
 * _islower - fonction
 *
 * Return: 1 si c est lowercase sinon return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
