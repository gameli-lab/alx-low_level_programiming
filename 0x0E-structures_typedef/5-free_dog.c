#include "dog.h"

/**
 *free_dog - frees the allocated memories
 *@d: pointer to the memory
 *
 *Return: returns nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
	return;
}
