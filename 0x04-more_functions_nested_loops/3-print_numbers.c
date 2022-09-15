#include "main.c"

/**
 * print_numbers - give in numbers as output
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
