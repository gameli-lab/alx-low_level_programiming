#include "dog.h"

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return (NULL);
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
