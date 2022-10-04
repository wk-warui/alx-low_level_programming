#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to the string given as a parameter
 *
 * Return: NUll if str is equal to NULL,
 * on success return pointer to the duplicated string,
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *par;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	par = (char *)malloc(sizeof(char) * (i + 1))
		;
	if (par == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		par[j] = str[i];

	return (par);
}
