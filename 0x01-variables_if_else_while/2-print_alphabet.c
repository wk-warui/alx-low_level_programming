#include <stdio.h>
/**
 * Main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char a = 'a';
	int n = 0;

	while (n < 26)
	{
		putchar(a);
		a++;
		n++;
	}
	putchar('\n');
	return (0);
}
