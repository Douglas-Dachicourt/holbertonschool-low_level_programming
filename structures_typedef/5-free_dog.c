#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - fct qui libère en mémoire la struct via une autre fct
 * @d: la structure à free
 */
void free_dog(dog_t *d)
{
	d = malloc(sizeof(d));

	if (d)
		free(d);
}
