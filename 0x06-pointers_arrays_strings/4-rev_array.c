#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: pointer to the araay to be reversed
 * @n: number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int str1, str2;

	n = n - 1;
	str2 = 0;
	while (str2 <= n)
	{
		str1 = a[str2];
		a[str2++] = a[n];
		a[n--] = str1;
	}
}
