#include "function_pointers.h"
/**
 * int_index - a function that searces for an integer
 * @array: the array to be searched
 * @size: the size of the array
 * @cmp: pointer to compare function
 * Return: the index of the element, 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (0);
}

