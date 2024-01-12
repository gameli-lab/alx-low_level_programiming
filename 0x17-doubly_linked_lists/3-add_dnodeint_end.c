#include "lists.h"

/**
 * add_dnodeint_end - adds node to the end
 * @head: pointer to the head
 * @n: data to be stored
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *tp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}

	tp = *head;

	while (tp->next != NULL)
		tp = tp->next;

	tp->next = temp;
	temp->prev = tp;

	return (temp);
}
