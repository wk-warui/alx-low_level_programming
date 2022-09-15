#include "main.h"

/**
 * print_line - enter number
 * @n: idk
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int num_lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num_lines = 1; num_lines <= n; num_lines++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
