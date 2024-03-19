#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - fct qui fait tourner le programme principal
 * @argc: le nombre d'arguments passé en console
 * @argv: tableau qui identifie les éléments de argc
 * Return: 0 si le programme compile sans pb
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;

	if (argc != 5)
	{
		return (1);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	result = get_op_func(op)(num1, num2);

	if (result == 0)
	{
		return (1);
	}

	printf("%d\n", result);

	return (0);
}
