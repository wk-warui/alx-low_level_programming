#include "main.h"

/**
 * print_array - prints elements of an array
 * @a: A pointer of an int to be changed
 * @n: number of elements of an array
 *
 * Return: Always 0(Success)
 */
void print_array(int *a, int n)

{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
	{
		printf(", ");
	}

		i++;
	}

		printf("\n");
}
