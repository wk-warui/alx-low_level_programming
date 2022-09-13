#include "main.h"

/**
 * print_last_digit - prints last digit
 * @num: last digit
 *
 * Return: value of the last digit
 * Relays my work explained
 */
int print_last_digit(int num)
{
	int = n;

	n = num % 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
