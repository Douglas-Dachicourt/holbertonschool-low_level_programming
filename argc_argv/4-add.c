#include <stdio.h>
#include <stdlib.h>
/**
 * main - fct qui
 * @argc: nb d'arguments
 * @argv: tableau d'éléments
 * Return: exit code status 0 si tout se passe bien
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	if (!argv[0])
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		sum = sum + num;

		if (!num || (num - 1))
		{
			printf("Error\n");
		return (1);
		}
	}
	printf("%d\n", sum);
return (0);
}
