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
		chien->name = _strdup(name);

		if (chien->name == NULL)
		{
			free(chien->name);
			free(chien);
			return (NULL);
		}

		chien->age = age;

		if (chien->owner == NULL)
		{
			free(chien->owner);
			free(chien);
			return (NULL);
		}
	} else
		return (NULL);

return (chien);
}
