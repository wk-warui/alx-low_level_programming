#include "main.h"

/**
 * string_toupper - changes letters of a string to uppercase
 * @a: pointer to string
 * Return: nothing
 */
char *string_toupper(char *a)
{
	int size;

	size = 0;
	while (a[size] != '\0')
	{
		if (a[size] >= 97 && a[size] <= 122)
		{
			a[size] = a[size] - 32;
		}
		size++;
	}
	return (a);
}
