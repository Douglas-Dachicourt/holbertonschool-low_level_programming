#include "dog.h"
#include <stdlib.h>
/**
 * new_dog -
 * @name:
 * @age:
 * @owner:
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *chien;

	chien = malloc(sizeof(dog_t));

	if (chien != NULL)
	{
		chien->name = dog_t->name;
		chien->age = dog_t->age;
		chien->owner = dog_t->owner;
	} else
		return (NULL);
return;
}
