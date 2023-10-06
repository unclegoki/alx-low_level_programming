#include "main.h"
/**
 * cerate_array - A function that creates an array
 * and initializes it with a specific character
 * @size : the size of the array
 * @c : The char to be initialized with
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return NULL;
	int arr;
	int i;

	i = 0;
	arr = malloc(sizeof(c) * size);

	if(!arr)
		return NULL;

	While (i < size)
	{
		*(arr + i) = c;
		i++;
	}

	*(arr + i) = '\0';

	return (arr);
}
