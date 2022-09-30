#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: c string to be scanned
 * @accept: character in str1 that matches that in str2
 *
 * Return: string that matches any character specified in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int q;

	while (*s != '\0')
	{
		q = 0;
		while (accept[q] != '\0')
		{
			if (*s == accept[q])
			{
				return (s);
			}
			q++;
		}
		s++;
	}
	return (0);
}
