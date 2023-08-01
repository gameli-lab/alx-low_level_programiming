#include "lists.h"


/**
 *print_listint - prints the number of nodes 
 *@h: the head pointing to the first node
 *
 *Return: returns count
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h -> n);
		h = h -> next;
		count++;
	}
	return (count);
}
