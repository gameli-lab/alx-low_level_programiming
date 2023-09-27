#include "lists.h"

/**
 * reverse_listint - reverses the list
 * @head: pointer to the head
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL, *current = *head;
	
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (prev);
}
