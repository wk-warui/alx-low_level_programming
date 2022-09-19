#include "main.h"

/**
 * print_rev - prints a function in reverse
 * @s: a pointer to an int that will be reversed
 *
 * Return: Always 0(Success)
 */
void print_rev(char *s)
{
	int f;

	f = 0;
	while (s[f] != '\0')
	{
		f++;
	}
	for (f = 0; s[f]; f--)
	{
		_putchar(s[f]);
	}
	_putchar('\n');
}
