#include "main.h"

/**
 * print_most_numbers - enter numbers
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		while (number != '2' && number != '4')
		{
			_putchar(number);
		}
	}
	_putchar('\n');
}
