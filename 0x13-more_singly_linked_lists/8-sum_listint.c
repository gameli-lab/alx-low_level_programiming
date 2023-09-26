#include "lists.h"

/**
 * sum_listint - sums all the data in the list
 * @head: pointer to the head of the list
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
