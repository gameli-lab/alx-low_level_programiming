#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at the index
 * @head: pointer to pointer to the head of the list
 * @idx: where the node will be inserted
 * @n: data to be assigned to the node
 *
 * Return: adress to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int pos = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp != NULL && pos < (idx - 1))
	{
		temp = temp->next;
		pos++;
	}
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;
	new->n = n;

	return (new);
}
