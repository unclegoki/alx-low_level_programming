#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums up all the arguments
 * @n: first argument
 * Return: sum of all args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int result;
	int i;

	result=0;
	va_start(ap, count);
	for(i=0; i<n; i++)
	{
		result += v_arg(ap, int);
	}
	va_end(ap);
	return (result);
}
