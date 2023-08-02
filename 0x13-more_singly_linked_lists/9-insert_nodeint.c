#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a node at an index
 *@head: pointer to a pointer pointing to the first node
 *@idx: index where node will be added
 *@n: node to be added
 *
 *Return: returns the address of the new node otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *current, *prev;
	unsigned int count;
	if ((*head == NULL) && (idx == 0))
	{
		ptr = (listint_t *)malloc(sizeof(listint_t));
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr -> n = n;
		ptr -> next = NULL;
		*head = ptr;
		return (ptr);
	}
	current = *head;
	prev = NULL;
	count = 0;

	while (current != NULL)
	{
		if (count == idx)
		{
			ptr = (listint_t *)malloc(sizeof(listint_t));
			if (ptr == NULL)
			{
				return (NULL);
			}
			ptr -> n = n;
			ptr -> next = current;
			if (prev != NULL)
			{
				prev -> next = ptr;
			}
			else
			{
				*head = ptr;
			}
			return (ptr);
		}
		prev = current;
		current = current -> next;
		count++;
	}return (NULL);
}
