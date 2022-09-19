#include "main.h"

/**
 * _puts - prints a string
 * @str: a string to be printed
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar(c[m]);
	}
	_putchar('\n');
}
