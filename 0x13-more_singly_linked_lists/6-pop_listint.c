#include "lists.h"

/**
 *pop_listint - deletes the first node
 *@head: pointer to pointer pointing to the first node
 *
 *Return: return 0
 */

int pop_listint(listint_t **head)
{
	int ret;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = (*head) -> next;
	ret = temp -> n;
	free (temp);
	temp = NULL;
	return (ret);
}
		
	
