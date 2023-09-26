#include "lists.h"

/**
 * free_listint2 - frees the list
 * @head: pointer to pointer to the head of the list
 * Return: Nothing
 */


void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (head)->next;
		free(temp);
	}
	*head = NULL;
}
