#include "main.h"

/**
 * print_times_table - prints th 9 times table, starting with 0
 * @n: - What n does
 */

void print_times_table(int n)
{
	int i, j, k;


	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (!(n > 15 || n < 0))
		{
			k = j * i;
			if (j == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
		}
		}
		}
		_putchar('\n');
	}
}
