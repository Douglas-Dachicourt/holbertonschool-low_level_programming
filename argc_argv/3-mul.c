#include <stdio.h>
#include <stdlib.h>
/**
 * main - fct qui mutliplie deux entiers en cli
 * @argc: nb d'arguments
 * @argv: tableau d'éléments
 * Return: exit code status 0 si tout se passe bien
 */
int main(int argc, char *argv[])
{
	int multiply;
	char err[] = "Error";

	multiply = (atoi(argv[1])) * (atoi(argv[2]));

	if (argc > 2 && argv[1] && argv[2])
	{
		printf("%d\n", multiply);
		return (0);
	}
	printf("%s\n", err);
	return (-1);

return (0);
}
