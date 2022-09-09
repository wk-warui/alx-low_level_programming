#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 0)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
