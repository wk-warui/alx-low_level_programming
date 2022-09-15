#include "main.c"

/**
 * print_numbers - give in numbers as output
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int number = 48;

	for (number = 48; number < 58; number++)
	{
		_putchar(number);
	}
	_putchar(10);
}
