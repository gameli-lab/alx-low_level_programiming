#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure for dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Structure describing a dog
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
