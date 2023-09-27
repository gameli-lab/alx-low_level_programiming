#include "lists.h"

/**
 * delete_nodeint_at_index - dels at an idx
 * @head: head of the link
 * @idx: node to del
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current, *prev;
	unsigned int pos = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	prev = NULL;

	while (current != NULL && pos < index)
	{
		prev = current;
		current = current->next;
		pos++;
	}
	if (current == NULL)
		return -1;
	prev->next = current->next;
	free(current);

	return (1);
}
