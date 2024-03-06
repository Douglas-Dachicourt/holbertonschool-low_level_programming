#include "main.h"
/**
 * _pow_recursion - fct qui calcule le 1er param à la puissance param 2
 * @x: param 1
 * @y: param 2
 * Return: le résultat
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
