#include "lists.h"

/**
 **get_nodeint_at_index - gets the node at the index
 *@head: pointer to the first node
 *@index: the nth node
 *
 *Return: returns the nth node otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t  *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current -> next;
		count++;
	}
	return (NULL);
}
