#include "dog.h"
#define NULL (void *)0

/**
 * init_dog - initializes the variable of type struct dog
 * @d: Th dog to be initialized
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
