#include <stdio.h>
/**
 * main - afficher le nom du programme compilé
 * @argc: nb d'arguments
 * @argv: tableau d'éléments
 * Return: exit code status 0 si tout se passe bien
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (argv[i] != NULL && i > 0)
		{
			sum++;
		}
	}
	printf("%d\n", sum);

return (0);
}
