#include "main.h"
/**
 * factorial - fct qui retourne une valeur factorielle
 * @n: le chiffre dont on cherche la factorielle
 * Return: la factorielle souhaitée
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
