#include "lists.h"


/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: pointer to pointer to the head of the list
 * @n: integer parameter
 * Return: address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->next = *head;
		new->n = n;
		*head = new;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
