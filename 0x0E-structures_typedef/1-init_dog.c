#include <stdio.h>
#include "dog.h"

/**
 *init_dog - dog class
 *@d: struct pointer
 *@name :name point to
 *@age: age of dog point to
 *@owner: - im tired of betty comment
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
