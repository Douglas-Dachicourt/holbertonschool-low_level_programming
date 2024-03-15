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

	if (new != NULL)
	{
		new->name = name;
		new->age = age;
		new->owner = owner;
	} else
		return (NULL);
return;
}
