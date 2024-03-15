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

	chien->name = _strdup(name);
	if (chien->name == NULL)
	{
		free(chien);
		return (NULL);
	}

	chien->owner = _strdup(owner);
	if (chien->owner == NULL)
	{
		free(chien->name);
		free(chien);
		return (NULL);
	}

	chien->age = age;

return (chien);
}
