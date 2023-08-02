#include "lists.h"

/**
 *free_listint - frees the listint list
 *@head: pointer to the first node
 *
 *Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *ptr;

	while (current != NULL)
	{
		ptr = current -> next;
		free (current);
		current = ptr;
	}
}
