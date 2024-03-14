#include "dog.h"
#include <stdio.h>
/**
 * print_dog - fonction qui imprime la struct dog avec ses valeurs
 * @d: la structure modèle
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		puts("");

	if (d->name == NULL)
	{
		puts("Name: (nil)");
	} else
	{
		printf("Name: %s\n", d->name);
	}
	if (!(d->age))
	{
		puts("Age: (nil)");
	} else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		puts("Owner: (nil)");
	} else
	{
		printf("Owner: %s\n", d->owner);
	}
}
