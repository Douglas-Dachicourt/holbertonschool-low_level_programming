#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - fct qui imprime la cdc souhaitée via une autre fct
 * @name: la cdc que l'on souhaite passer
 * @f: la fonction que l'on souhaite appeler
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
