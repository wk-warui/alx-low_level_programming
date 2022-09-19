#include "main.h"

/**
 * swap_int - interchanges the value of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
