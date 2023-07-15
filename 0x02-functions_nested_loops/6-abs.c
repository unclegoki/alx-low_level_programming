#include "main.h"
/**
 *_abs - Entry point
 *
 * @n - int to be checked
 *description - Return absolute value of int
 * return: 0, always
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
