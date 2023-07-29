#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the fxn
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *text, *separator = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			if (format[i] == 'c')
			{
				printf("%s%c", separator, va_arg(list, int));
			}
			else if (format[i] == 'i')
			{
				printf("%s%d", separator, va_arg(list, int));
			}
			else if (format[i] == 'f')
			{
				printf("%s%f", separator, va_arg(list, double));
			}
			else if (format[i] == 's')
			{
				char *text = va_arg(list, char *);
				if (!text)
				{
					text = "(nil)";
				}
				printf("%s%s", separator, text);
			}
			else
			{
				i++;
				continue;
			}

			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
