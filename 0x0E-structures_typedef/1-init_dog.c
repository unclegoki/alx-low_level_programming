#include "dog.h"

/**
 * init_dog - s function to initialize the structure of type dog
 * @d: a ptr to the structure
 * @name: a ptr to the name of the dog
 * @age: the age of dog
 * @owner: ptr to owner of dog
 *
 * Return: void
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
