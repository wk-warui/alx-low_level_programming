#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: value to be asigned for memory
 *
 * Return: a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause normal
 * process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
