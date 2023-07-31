#include "lists.h"
#include <stdio.h>
/**
 * print_listint - This function prints
 * all the elements of a listint_t list
 * @h: ptr to the head of the list.
 *
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
