#include "lists.h"

/**
*listint_len - a function to return the num of
* elements in a linked list
*@h: head of the list
*Return: num of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

