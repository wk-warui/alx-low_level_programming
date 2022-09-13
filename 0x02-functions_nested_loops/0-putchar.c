
#include "main.h"

/**
 * main - Program entry point
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char test[9] = "_putchar";
	int i;

	i = 0;
	while (i < 8)
	{
		_putchar(test[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
