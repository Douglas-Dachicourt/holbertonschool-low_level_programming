#include "main.h"
/**
 * prime - checker si n est premier ou non/ verifier les diviseurs
 * @a: le diviseur à tester sur n
 * @n: le nb testé
 * Return: vérification du prochain diviseur (incrémentation de a)
 */
int prime(int a, int n)
{
	if (n % a == 0)
	{
		return (0);
	} else if (a * a > n)
	{
		return (1);
	}
return (prime(a + 1, n));
}
/**
 * is_prime_number - fct qui affiche le résultat de la précedente fct
 * @n: le nb testé
 * Return: le résultat , 1 si n est premier, 0 dans l'autre cas
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
return (prime(2, n));
}
