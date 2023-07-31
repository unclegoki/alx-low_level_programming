#include "lists.h"
/**
* delete_nodeint_at_index - a function that deletes a node at a given index
* @head: head of the list
* @index: index of the node
* Return: 1 or 0
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *assign_node;
	listint_t *n;

	assign_node = *head;
	if (index != 0)
		for (i = 0; i < index - 1 && assign_node != NULL; i++)
			assign_node = assign_node->next;
	if (assign_node == NULL || (assign_node->next == NULL && index != 0))
		return (1);
	n = assign_node->next;
	if (index != 0)
	{
		assign_node->next = n->next;
		free(n);
	}
	else
	{
		free(assign_node);
		*head = n;
	}
	return (1);
:x
