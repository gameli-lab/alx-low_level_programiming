#include "lists.h"

/**
 **reverse_listint - reverses the list
 *@head: pointer to pointer pointing to the firsr node
 *
 *Return: returns a pointer to the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead = NULL, *behind = NULL;
	while (*head != NULL)
	{
		ahead = (*head) -> next;
		(*head) -> next = behind;
		behind = *head;
		*head = ahead;
	}
	*head = behind;
	return (behind);
}
