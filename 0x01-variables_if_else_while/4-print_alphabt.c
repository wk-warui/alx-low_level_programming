#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	int n = 0;

	while (a != 'q' && a != 'e')
	{
		if (n <= 25)
		{
			putchar(a);
		}
		a++;
		n++;
	}
	putchar('\n');
	return (0);
}
