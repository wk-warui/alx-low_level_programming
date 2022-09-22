#include "main.h"

/**
 * _strncat - concatenates tow strings
 * @dest: pointer to the destination string
 * @src: pointer to source string
 * @n: number of bytes from the src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int size, i;

	size = 0;
	while (dest[size] != '\0')
	{
		size++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, size++)
	{
		dest[size] = src[i];
	}
	dest[size] != '\0';
	return (dest);
}
