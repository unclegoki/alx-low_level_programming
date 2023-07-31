#include "lists.h"
/**
* pop_listint - a function that deletes
* the head node of a list
* @head: the head of the node
* Return: the data contained in the head node
*/
int pop_listint(listint_t **head)
{
	int value;
	listint_t *assign;
	listint_t *h;

	if (*head == NULL)
		return (0);
	assign = *head;
	value = assign->n;
	h = assign->next;
	free(assign);
	*head = h;
	return (value);
}

