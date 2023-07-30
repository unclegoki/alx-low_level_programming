#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function to free dog
 * @d: ptr to dog to be free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
