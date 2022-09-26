#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: 2nd array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int p, r;

	p = 0;
	while (p < 8)
	{
		r = 0;
		while (r < 8)
		{
			_putchar (a[p][r]);
			r++;
		}
		_putchar ('\n');
		p++;
	}
}
