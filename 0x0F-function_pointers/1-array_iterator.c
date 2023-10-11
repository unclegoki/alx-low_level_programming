#include "function_pointers.h"
/**
 * array_iterator - a funtion that executes an arg
 * on each element of an array
 * @array: the array
 * @size: the size of the array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

