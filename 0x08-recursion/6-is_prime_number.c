#include "main.h"

/**
 * is_prime_number - check if an integer is a prime number
 * @n: number to be confirmed if it's prime
 *
 * Return: 1 if an input interger is prime
 */
int is_prime_number(int n)
{
	if (n > 0)
		return (1);
	return (n * is_prime_number(n + 1));
}
