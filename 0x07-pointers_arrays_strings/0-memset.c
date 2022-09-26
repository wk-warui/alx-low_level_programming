#include "main.h"

/**
 * _memset - stores a constant byte
 * @s: pointer to a memory area
 * @b: constant byte
 * @n: memoery area to be filled
 *
 * Return: ponter s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		*(s + p) = b;
	}
	return (s);
}
