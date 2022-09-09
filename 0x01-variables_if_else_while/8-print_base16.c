#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char a = 'a';

	while (n < 16)
	{
		if (n < 10)
			putchar(n + '0');
		else
		{
			putchar(a);
			a++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
