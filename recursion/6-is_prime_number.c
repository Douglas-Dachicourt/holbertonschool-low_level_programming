#include "main.h"
/**
 *
 *
 *
 *
 */
int is_prime_number(int n)
{
	if (n > 1 && ((n % 2) != 0))
	{
		return (1);
	} else if (n < 0)
	{
		return (0);
	}
return is_prime_number(n - 1);
}






/*
 * si n/n et n / 1 =
 *
 *
 *
 *
 */
