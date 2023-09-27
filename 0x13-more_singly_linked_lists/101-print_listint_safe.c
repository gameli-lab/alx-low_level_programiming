#include "lists.h"

/**
 * print_listint_safe - prints the list
 * @head: pointer to the head
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t c = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		c++;
		if (current < current->next)
			exit(98);
		current = current->next;
	}
	return (c);
}

