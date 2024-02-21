#include "main.h"
/**
 * _abs - afficher la valeur absolue d'un entier
 *
 * Return: 0 si tout va bien
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	} else if (r < 0)
	{
		return (-r);
	} else
		return (0);

	return (0);
}
