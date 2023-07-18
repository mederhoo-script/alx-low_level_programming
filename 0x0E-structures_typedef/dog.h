#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog class
 *
 * @name: Dog's name
 *
 * @age: Dog's age
 *
 * @owner: Dog's Owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};/*tesk0*/

void init_dog(struct dog *d, char *name, float age, char *owner);/*task 1*/

/*void print_dog(struct dog *d);task 2*/

/*dog_t *new_dog(char *name, float age, char *owner);task 4*/

/*void free_dog(dog_t *d);task 5 prototype*/

#endif/*mederhoo-script*/
