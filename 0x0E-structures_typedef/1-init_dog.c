#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @name - pointer to the char name's dog
 * @owner - pointer to the char owner's dog
 * @d - pointer to the struct type dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
