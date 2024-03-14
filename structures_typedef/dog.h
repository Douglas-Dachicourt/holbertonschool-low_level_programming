#ifndef __myheader_h
#define __myheader_h
/**
 * struct dog - structure/objet
 * @name: Nom du membre
 * @age: Age du membre
 * @owner: Nom du propriétaire
 *
 * Description: structure qui récolte les informations d'un chien
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
