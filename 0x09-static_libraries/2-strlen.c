#include "main.h"

/**
 * _strlen - Returns lenght of a string
 * @s: string
 *
 * Return: Always 0(Success)
 */
int _strlen(char *s)
{
	int q;

	q = 0;
	while (s[q] != '\0')
	{
		q++;
	}
	return (q);
}
