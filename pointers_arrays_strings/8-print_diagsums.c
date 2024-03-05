#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -
 * @a:
 * @size:
 */
void print_diagsums(int *a, int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		int sum = 0;
		for (j = 0; j < size; j++)
		{
			sum += a[i][j];
		}
		printf("%d", sum);
	}
}


