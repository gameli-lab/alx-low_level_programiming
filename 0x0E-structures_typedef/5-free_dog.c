#include "dog.h"

/**
 * free_dog - frees the new dog
 * @d: the new dog created
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d = NULL)
	{
		return (NULL);
	}
	free(new_dog -> name);
	free(new_dog -> owner);
	free(new_dog);
	return;
}
