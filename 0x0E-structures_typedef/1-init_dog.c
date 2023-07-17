#include "dog.h"

/**
 *init_dog - initiates the structure created in the header file
 *
 *Return: returns nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
