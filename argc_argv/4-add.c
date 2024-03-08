#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - fct qui
 * @argc: nb d'arguments
 * @argv: tableau d'éléments
 * Return: exit code status 0 si tout se passe bien
 */
int main(int argc, char *argv[])
{
	int i, j, num, sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			num = atoi(argv[i]);

			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
			return (1);
			}
		sum = sum + num;
		}
	}
	printf("%d\n", sum);
return (0);
}
