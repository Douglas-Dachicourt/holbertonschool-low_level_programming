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
	char operator;

	if (argc != 4 || argv[2][1] != 0)
	{
		puts("Error");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2][0];
	num2 = atoi(argv[3]);

	if (operator == 43 || operator == 42 || operator == 45
	|| operator == 47 || operator == 37)
	{
		result = get_op_func(&operator)(num1, num2);
	}
	else
	{
		puts("Error");
		exit(99);
	}

	printf("%d\n", result);

	return (0);
}
