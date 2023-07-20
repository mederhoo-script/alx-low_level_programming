#include "dog.h"

/**
 * init_dog - initializes a struct
 * @d: pointer to strut
 * @name: point to the name of the dog
 * @age: age of dog
 * @owner: point to owner
 *
 * Return: 0
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
