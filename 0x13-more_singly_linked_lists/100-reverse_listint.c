#include "lists.h"

/**
*reverse_listint - a function that reverses a linked list
*@head: the head of the list
*Return: pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *n;

	ptr = NULL;
	n = NULL;
	while ((*head) != NULL)
	{
		n = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = n;
	}
	*head = ptr;
	return (*head);
}

