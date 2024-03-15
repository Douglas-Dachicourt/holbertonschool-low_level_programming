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
	dog_t *newDog;

	newDog= malloc(sizeof(dog_t));

	if (newDog != NULL)
	{
		newDog->name = name;
		newDog->age = age;
		newDog->owner = owner;
	} else
		return (NULL);
return;
}
