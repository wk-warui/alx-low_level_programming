#include "main.h"

/**
 * clear_bit - stes y=the value of a bit to 0 at a given index
 * @n: pointer to a bit
 * @index: bit position starting from 0
 *
 * Return: 1 if it worked, -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
