#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: NULL if string is empty,
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	unsigned int j, k, l, limit;

	if (s1 == NULL)
		s2 = "";
	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j] != '\0'; j++)
		;

	for (k = 0; s2[k] != '\0'; k++)
		;

	string = malloc(sizeof(char) * (j + k + 1));

	if (string == NULL)
	{
		free(string);
		return (NULL);
	}

	limit = k;
	for (l = 0; l <= limit; l++, k++)
		string[l] = s2[k];

	return (string);
}
