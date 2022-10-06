#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer to the new array,
 * NULL if min is less than max & if malloc fails
 */

int *array_range(int min, int max)
{
	int *p, i = 0, s = min;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (!p)
		return (0);
	while (i <= max - min)
		p[i++] = s++;
	return (p);
}
