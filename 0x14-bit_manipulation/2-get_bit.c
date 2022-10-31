#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: bit
 * @index: bit position starting from 0
 *
 * Return: Value of bit at index INDEX, or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
