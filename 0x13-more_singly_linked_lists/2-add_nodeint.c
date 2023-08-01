#include "lists.h"

/**
 *add_nodeint - adds a node at the beginning of the list
 *@head: pointer to pointer pointing to the first node
 *@n: data for the new node to be inserted in the begining
 *
 *Description: adding a node at the beginning of a list
 *
 *Return: returns the address of the new element otherwise NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = (listint_t *)malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr -> n = n;
	ptr -> next = *head;
	*head = ptr;

	return (ptr);
}
	
