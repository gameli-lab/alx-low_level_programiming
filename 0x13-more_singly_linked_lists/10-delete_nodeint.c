#include "lists.h"

/**
 *delete_nodeint_at_index- -deletes node at index 
 *@head: pointer to pointer pointing to the first node
 *@index: where node should be deleted
 *
 *Return: returns 1 otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current, *prev;
	unsigned int count = 0;
	
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head) -> next;
		free (temp);
		return (1);
	}
	current = *head;
	prev = NULL;
	while (current != NULL)
	{
		if (count == index)
		{
			prev -> next = current -> next;
			free (current);
			return (1);
		}
		prev = current;
		current = current -> next;
		count ++;
	}
	return (-1);
}
