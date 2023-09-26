#include "lists.h"

/**
 * pop_listint - dels first node
 * @head: pointer to pointer to the head
 * Return: data of the head otherwise 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;

	*head = (*head)->next;

	free(temp);
	return (*head);
}
