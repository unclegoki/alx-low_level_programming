#include <stdarg.h>
#include "variadic_functions.c"

/**
 * print_strings - a variadic function to print strings
 * @separator: separator between strings
 * @n: the number of arguments
 */
void print_strings(const char *separator, const unsigned n, ...)
{
	unsigned int i;
	char *text;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (!text)
			text = "(nil)";
		if (!separator)
			printf("%s", text);
		else if (separator && i == 0)
			printf("%s", text);
		else
			printf("%s%s", separator, text);
	}
	putchar(10);
	va_end(list);
}
