#include "main.h"

/**
 * string_nconcat - coancatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @n: index
 *
 * Return: NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
		n = size2;
	z = malloc((size1 + n + 1) * sizeof(char));

	if (z == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		z[i] = s1[i];
	}
	for (; i < (size1 + n); i++)
	{
		z[i] = s2[i - size1];
	}
	z[i] = '\0';
	return (z);
}
