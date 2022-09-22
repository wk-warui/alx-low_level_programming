#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a pointer to destination string
 * @src: a pointer to the source string
 *
 * Return: pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int length, l;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (l = 0; src[l] != '\0'; j++, length++)
	{
		dest[length] = src[l];
	}
	dest[length] = '\0';
	return (dest);
}
