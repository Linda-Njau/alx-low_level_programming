#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - intializes variable of type strucct dog
 * @d: the dog to be initialized
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner:  owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
