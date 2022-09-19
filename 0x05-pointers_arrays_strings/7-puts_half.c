#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: A pointer of an int that is changed
 *
 * Return: Always 0(Success)
 */
void puts_half(char *str)
{
	int s, last;

	s = 0;
	while (str[s] != '\0')
	{
		s++;
	}

	last = (s + 1) / 2;
	for (s = last; str[s]; s++)
	{
		_putchar (str[s]);
	}
	_putchar ('\n');
}
