#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *r;
	unsigned int i;

	if (ptr != NULL)
		p = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	r = malloc(new_size);
	if (r == NULL)
	return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(r + i) = p[i];
	}
	free(ptr);
return (r);
}
