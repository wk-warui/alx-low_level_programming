#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string
 *
 * Return: value less than 0 if string is less than the other.
 * value greater than 0 if string is greater than the other.
 * 0 if strings are equal.
 */
nt _strcmp(char *s1, char *s2)
{
	int betty, maria;

	betty = 0;
	while (s1[betty] == s2[betty] && s1[betty] != '\0')
	{
		betty++;
	}
	maria = s1[betty] - s2[betty];
	return (maria);
}
