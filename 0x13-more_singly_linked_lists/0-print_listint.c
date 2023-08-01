#include "lists.h"


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 *print_listint - prints the number of nodes 
 *@h: the head pointing to the first node
 *
 *Return: returns count
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		printf("%d\n", h -> next);
		count++;
	}
	return (count);
}
