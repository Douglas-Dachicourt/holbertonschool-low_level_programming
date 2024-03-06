#include "main.h"
/**
 * check_racine - fct qui vérifie si le 1er param est un carré du 2e param
 * @a: entier test
 * @n: l'entier dont on doit trouver le carré
 * Return: l'incrémentation de a et le résultat attendu
 */
int check_racine(int a, int n)
{
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return (a);
	}
return (check_racine(a + 1, n));
}
/**
 * _sqrt_recursion - fct qui affiche les carrés des nb proposés en param
 * @n: l'entier dont on doit trouver le carré
 * Return: le résultat (carré) attendu
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
return (check_racine(0, n));
}
