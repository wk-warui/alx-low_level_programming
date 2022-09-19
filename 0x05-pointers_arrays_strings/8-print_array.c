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
	int r;

	r = 0;
	while (r < n)
	{
		printf("%d", a[r]);
		if (i < n - 1)
		{
			printf(", ");
		}
		r++;
	}
	printf("\n");
}
