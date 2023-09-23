#include "lists.h"

/**
 * add_node_end - adds a node to the end of the list
 * @head: pointer to pointer to the head
 * @str: pointer to the string
 * Return: address of the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	unsigned int len = 0;

/*	temp = *head;*/

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len])
		len++;

	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}
	return (new);
}
