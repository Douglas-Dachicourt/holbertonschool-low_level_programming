#include "main.h"
/**
 * swap_int - interchanger deux valeurs initiale via les pointeurs
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
