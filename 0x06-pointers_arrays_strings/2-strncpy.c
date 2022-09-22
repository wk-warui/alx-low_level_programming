#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer to the destination string
 * @src: pointer to te source string
 * @n: number of bytes to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int size, i;

	size = 0;
	while (dest[size] != '\0')
	{
		for (i = 0; i < n && src[i] != '\0'; i++, size++)
			dest[i] = src[i];
		for (; i < n; i++)
			dest[i] = '\0';
	}
	return (dest);
}
