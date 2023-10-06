#include "main.h"
/**
 * create_array - A function that creates an array
 * and initializes it with a specific character
 * @size : the size of the array
 * @c : The char to be initialized with
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	i = 0;

	if (size == 0)
		return (0);

	arr = (char *) malloc(sizeof(c) * size);

	if (!arr)
		return (0);

	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}

	*(arr + i) = '\0';

	return (arr);
}
