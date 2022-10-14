#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to the array.
 * @size: size of the array.
 * @cmp: function pointer
 *
 * Return: index of the first eement for which the cmp
 * function does not return 0. If no elements matches,
 * return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int f;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (f = 0; f < size; f++)
			if (cmp(array[f]))
				return (f);
	}

	return (-1);
}
