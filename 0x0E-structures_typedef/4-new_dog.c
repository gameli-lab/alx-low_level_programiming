#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(strlen(name) + 1);
	if (new_dog == NULL)
	{
		return (NULL);
	}

	strcpy(new_dog->name, name);
	
	new_dog->age = age;

	new_dog = malloc(strlen(owner) + 1);
	if (new_dog == NULL)
	{
		return (NULL);
	}
	strcpy(new_dog->owner, owner);
	return (new_dog);
}
			
