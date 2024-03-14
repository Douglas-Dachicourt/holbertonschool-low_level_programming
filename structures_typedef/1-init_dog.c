#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - fct qui initialise une structure prééxistante
 * @d: le prototype de la structure présente dans le dog.h
 * @name: le paramètre nom à passer
 * @age: le paramètre age à passer
 * @owner: le paramètre du propriétaire
 *
 * Description: fonction qui permet d'afficher les membres d'une structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	} else
	{
		puts("Ok");
	}
}

