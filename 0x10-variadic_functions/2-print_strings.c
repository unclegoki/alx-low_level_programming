#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to separator string args
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *x;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);

		if (x == NULL)
			printf("nil");

		printf("%s", x);
		if (separator == NULL)
			return;
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
