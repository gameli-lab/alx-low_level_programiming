#include "lists.h"

/**
 * free_listint - frees the list
 * @head: pointer to the head of the list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
