#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: pointer to pointer to the head of the list
 * @n: the data parameter passed
 * Return: address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new = *head;
	}
	return (new);
}
