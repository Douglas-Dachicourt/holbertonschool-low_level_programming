#include "dog.h"
#include <stdlib.h>
#include "1-strdup.c"
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
		if(chien->name != NULL)
		{
			chien_name = _strdup(name);
		}

		chien->age = age;

		if (chien->owner != NULL)
		{
			chien->owner = _strdup(owner);
		}
	} else
		return (NULL);

return (chien);
}
