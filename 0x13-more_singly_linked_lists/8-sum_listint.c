#include "lists.h"

/**
 *sum_listint - sums all data of listint_t list
 *@head: pointer to the first node
 *
 *Return: returns 0 for empty list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current -> n;
		current = current -> next;
	}
	return (sum);
}
