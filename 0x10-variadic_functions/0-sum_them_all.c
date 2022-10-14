#include "variadic_functions.h"

/**
 * sum_them_all - adds up all the parameters
 * @n: number of parameters to be added
 *
 * Return: 0 if n is equal to 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
