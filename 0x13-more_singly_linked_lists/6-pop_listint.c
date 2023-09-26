#include "lists.h"

/**
 * pop_listint - dels first node
 * @head: pointer to pointer to the head
 * Return: data of the head otherwise 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		value = ((*head)->n);
		free(temp);
		return (value);
	}
	return (0);
}
