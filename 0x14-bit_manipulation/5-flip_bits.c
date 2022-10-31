#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number to be flipped
 * @m: number to flip n to
 *
 * Return: number of bits to flip fron n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, flipped = 0;

	while (xor > 0)
	{
		flipped += (xor & 1);
		xor >>= 1;
	}
	return (flipped);
}
