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
	/*je définis un nouvel espace*/
	dog_t *chien;

/*j'alloue l'espace pour mon nouveau chien */
	chien = malloc(sizeof(dog_t));

/*si cet espace est correctement alloué*/
	if (chien != NULL)
	{
		/*je copie dans mon chien le nom présent lors de l'appel*/
		chien->name = _strdup(name);

/*si je n'ai pas de name, je free le membre concerné et la structure en général*/
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
	} else
		return (NULL);

return (chien);
}
