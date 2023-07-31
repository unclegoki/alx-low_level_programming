#include "lists.h"

/**
* get_nodeint_at_index - a fxn to return nth node of a list
* @head: the head of the list
* @index: the index of the node
* Return: nth node of the list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}

