#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
