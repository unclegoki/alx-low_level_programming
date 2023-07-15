#include "main.h"
/**
 * print_last_digit - Print last digit of number
 *
 * @n: the number to be checked
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;
	if (result < 0)
	{
		_putchar (result + '0');
		return (-result);
	}
	_putchar (result + '0');
	return (result);
}
