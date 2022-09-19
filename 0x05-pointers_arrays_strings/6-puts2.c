#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * staring with the first character.
 * @str: A pointer to int that is to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		if (b % 2 == 0)
			_putchar (str[b]);
	}
	_putchar('\n');
}
