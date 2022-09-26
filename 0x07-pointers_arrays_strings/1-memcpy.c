#include "main.h"

/**
 * _memcpy - copies number of bytes
 * @src: where data to be copiedd is from
 * @dest: where data is to be copied to
 * @n: number of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
