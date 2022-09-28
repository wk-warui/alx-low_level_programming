#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - check if an integer is a prime number
 * @n: number to be confirmed if it's prime
 *
 * Return: 1 if an input integer is prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recurses to calculate a prime number
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if number is prime
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
