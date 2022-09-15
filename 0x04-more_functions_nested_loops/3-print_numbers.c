#include "main.c"

/**
 * print_numbers - give in numbers as output
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char a;

	if ((a >= 48) && (a <= 58))
	{
		_putchar(a);
	}
	_putchar('\n');
}
