#include "variadic_functions.h"

/**
 * print_numbers - a functiokn that prints numbers
 * followed by a new line
 * @separator: a string that seperates args
 * @n: number of integers allowed
 * Return: 0, always
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		printf("%d", x);
		if (separator == NULL)
			return;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
