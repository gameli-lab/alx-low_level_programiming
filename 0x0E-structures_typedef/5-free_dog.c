#include "dog.h"

/**
 * free_dog - frees the new dog
 * @d: the new dog created
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d -> name);
		free(d -> owner);
		free(d);
	}
}
