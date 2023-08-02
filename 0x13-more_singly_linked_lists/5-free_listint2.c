#include "lists.h"

/**
 *free_listint2 - frees the listint_t list
 *@head: pointer to pointer pointing to the first node
 *
 *Return: Nothin
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t  *ptr;

	while (current != NULL)
	{
		ptr = current -> next;
		free (current);
		current = ptr;
	}
	*head = NULL;
}
