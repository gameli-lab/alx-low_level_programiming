#ifndef DOG_H
#define DOG_H
#include <stdio.h>


struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef dog dog_t
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
