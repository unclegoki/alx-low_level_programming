#include "main.h"
/**
 * _pow_recursion - raise a num to a certain power
 * @y: the power
 * @x: the number
 * Return: the power
 */
int _pow_recursion(int x, int y)
{
	int n;

	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	n = _pow_recursion (x, y - 1) * x;
	return (n);
}
