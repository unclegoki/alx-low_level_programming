#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - theis function creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: ptr to a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n_l, old_l, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (n_l = 0; name[n_l]; n_l++)
		;
	n_l++;
	dog->name = malloc(n_l * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n_l; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (old_l = 0; owner[old_l]; old_l++)
		;
	old_l++;
	dog->owner = malloc(old_l * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < old_l; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
