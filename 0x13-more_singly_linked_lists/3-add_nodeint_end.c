#include "lists.h"

/**
 **add_nodeint_end - adds a new node at the end of the list
 *@head: pointer to pointer pointing to the first node
 *@n: data for the new node being created
 *
 *Description: adding a noide to the end of a linked list
 *
 *Return: returns the address of the new elements otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;
	ptr = *head;
	temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	
	temp -> n = n;
	temp -> next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (ptr -> next != NULL)
		{
			ptr = ptr -> next;
		}
		ptr -> next = temp;
	}
	return (temp);
}
