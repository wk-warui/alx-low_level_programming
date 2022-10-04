#include "main.h"

/**
 * create_array - Creates an array of characters,
 * and initializes it with a specific char.
 * @size: size of memory allocated
 * @c: specific character to be initialized
 *
 * Return: NULL if size is equal to 0,
 * return a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *cd;

	if (size == 0)
		return (NULL);

	cd = malloc(sizeof(c) * size);

	if (cd == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cd[i] = c;

	return (cd);
}
