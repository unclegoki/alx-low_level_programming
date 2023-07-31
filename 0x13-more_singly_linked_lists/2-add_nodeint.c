#include "lists.h"
/**
* add_nodeint - a function that adds a new node to
*  the beginning of a list
* @head: head of the list
* @n: value of the node
* Return: a ptr or null
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
