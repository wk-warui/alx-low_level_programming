#include "main.h"

/**
 * _pow_recursion - return the value of a number raised to another number
 * @x: number raised to a certain power
 * @y: the power of a certain number
 *
 * Return: if power is less than 0, then return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
