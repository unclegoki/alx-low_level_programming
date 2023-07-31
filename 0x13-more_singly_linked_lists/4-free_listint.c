#include "lists.h"

/**
*free_listint - a function that frees a list
*@head: the head of the list
*/
void free_listint(listint_t *head)
{
	listint_t *assign;

	while ((assign = head) != NULL)
	{
		head = head->next;
		free(assign);
	}
}
