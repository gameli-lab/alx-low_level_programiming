#include <stdio.h>

/**
 *typedef - type definition 
 */
typedef struct Node
{
	char *str;
	struct Node *next;
} list_t;

/**
 *size_t print_list - prints the list of strings
 *
 *@n: pointer to the  string
 *
 *Return: returns count
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	printf("[");
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("0");
		}
		else
		{
			printf("%s", h->str);
		}
		count++;
		h = h->next;

		if (h != NULL)
		{
			printf(", ");
		}
	}
	printf("]\n");

	return count;
}
