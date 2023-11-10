#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: numebr of parameters
 * Return: Sum of numbers or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int _sum, x;
	unsigned int i;
	va_list my_args;

	va_start(my_args, n);

	_sum = 0;

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		x = va_arg(my_args, int);

		_sum += x;
	}
	va_end(my_args);

	return (_sum);
}
