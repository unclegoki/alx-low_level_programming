#include "lists.h"
/**
* sum_listint - a function to return the sum of multiple data
* @head: the head of the list
* Return: sum of the list or 0
*/
int sum_listint(listint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}

