#include "main.h"
/**
 * print_sign- checks if a number is negative or positive or zero
 * @n: parameter to hold the number
 *
 * description- A program to check the case of an alphabet
 *
 * Return: 0, always
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
