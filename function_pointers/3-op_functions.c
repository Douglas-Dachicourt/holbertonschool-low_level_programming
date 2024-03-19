#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - fct qui additionne deux integer et qui en retourne la somme
 * @a: int 1
 * @b: int 2
 * Return: la somme
 */
int op_add(int a, int b)
{
	int sum = 0;

	sum = a + b;

	return (sum);
}
/**
 * op_sub - fct qui soustrait deux int et qui en retourne la soustraction
 * @a: int 1
 * @b: int 2
 * Return: la soustraction
 **/
int op_sub(int a, int b)
{
	int soustr = 0;

	soustr = a - b;

	return (soustr);
}
/**
 * op_mul - fct qui multiplie deux int et qui en retourne le résultat
 * @a: int 1
 * @b: int 2
 * Return: le résultat de la multiplication finale
 **/
int op_mul(int a, int b)
{
	int multiply = 1;

	multiply = a * b;

	return (multiply);
}
/**
 * op_div - fct qui divise deux int et qui en retourne le résultat
 * @a: int 1
 * @b: int 2
 * Return: le résultat de la division finale
 **/
int op_div(int a, int b)
{
	int division = 1;

	if (b == 0)
	{
		puts("Error");
		exit(100);
	}

	division = a / b;

	return (division);
}
/**
 * op_mod - fct qui récupère le reste d'une division de 2 int
 * @a: int 1
 * @b: int 2
 * Return: le reste de la division
 **/
int op_mod(int a, int b)
{
	int modul = 1;

	if (b == 0)
	{
		puts("Error");
		exit(100);
	}

	modul = a % b;

	return (modul);
}
