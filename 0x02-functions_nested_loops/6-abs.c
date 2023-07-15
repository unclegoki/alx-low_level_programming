#include "main.h"
/**
 *_abs - A function to check if an it is absolute
 *
 * @n: int to be checked
 *description - Return absolute value of int
 * Return: absolute value of int
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	return (n);
}
