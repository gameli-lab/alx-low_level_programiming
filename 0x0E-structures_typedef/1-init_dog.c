#include "dog.h"

/**
 *init_dog - initiates the structure created in the header file
 *
 *Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
