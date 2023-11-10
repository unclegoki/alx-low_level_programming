#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @c: char to be printed
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_str - prints a string
 * @str: string to be printed
 */
void print_str(va_list str)
{
	char *str_p = va_arg(str, char *);

	if (str_p == NULL)
		str_p = "(nil)";
	printf("%s", str_p);
}

/**
 * print_int - prints an integer
 * @i: integer to be printed
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_flt - prints a float number
 * @flt: float to be prnted
 */
void print_flt(va_list flt)
{
	printf("%f", va_arg(flt, double));
}

/**
 * print_all - prints anything
 * @format: list of arg types to be printed
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	prin_t p[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"f", print_flt},
		{NULL, NULL}
	};
	va_list arg_list;
	char *separator = "";

	va_start(arg_list, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;

		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(arg_list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(arg_list);
	printf("\n");
}
