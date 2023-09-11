#include "dog.h"

/**
 * init_dog - initiates the dog struct
 * @d: pointer to the dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * we are initiatint the structure for the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
} 
