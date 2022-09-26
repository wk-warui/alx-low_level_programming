#include "main.h"

/**
 * _strchr - locates acharacter of a string
 * @s: Pointer to the string
 * @c: string character
 *
 * Return: c if character is found,
 * and NULL not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
