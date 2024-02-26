#include <stdio.h>
/**
 * main - fonction main
 *
 * Return: 0 si tout se passe bien
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5) == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
				printf(" ");
			} else if (i % 5 == 0)
			{
				if (i != 100)
				{
					printf("Buzz");
					printf(" ");
				} else
				{
					printf("Buzz");
				}
			} else
			{
				printf("%d", i);
				printf(" ");
			}
		}
	}
	printf("\n");

	return (0);
}



