#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string
 *
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int a, b;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0')
	{
		a++;
	}
	b = s1[a] - s2a[a];
	return (b);
}
