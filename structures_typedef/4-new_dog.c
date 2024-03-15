#include "dog.h"
#include <stdlib.h>
#include "1-strdup.c"
/**
 * new_dog - nouveau chien où l'on copie simplement le nom et le owner
 * @name: le nom a passer en parametre
 * @age: l'age a passer en parametre
 * @owner: le proprietaire à passer en parametre
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *chien;

	chien = malloc(sizeof(dog_t));

	if (chien == NULL)
		return (NULL);

	if (chien != NULL)
	{
		chien->name = name;
		chien->age = age;
		chien->owner = owner;
	}
	return (chien);
}
