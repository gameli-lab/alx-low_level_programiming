#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - a structure for dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 */

struct dog
{
	char* name;
	float age;
	char* owner;
};

/**
 * dog_t - a new typedef for dog_t
 *
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
