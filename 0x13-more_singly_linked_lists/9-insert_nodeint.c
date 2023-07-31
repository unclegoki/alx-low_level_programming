#include "lists.h"

/**
*insert_nodeint_at_index - inserts a node at a given position
*@head: head of the list
*@idx: the index of the point where the new node will be added
*@n: the value of the node
*Return: address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *assign_node;

	assign_node = *head;
	if (idx != 0)
		for (i = 0; i < idx - 1 && assign_node != NULL; i++)
			assign_node = assign_node->next;
	if (assign_node == NULL && idx != 0)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = assign_node->next;
		assign_node->next = new_node;
	}
	return (new_node);
}
