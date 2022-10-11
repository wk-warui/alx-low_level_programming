#include "dog.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * free_dog - frees dogs
 * @d: pointer to the dog
 *
 * Return: 0 on success
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
