#include <stdio.h>
/**
 * print_sign- checks if a number is negative or positive or zero
 * @c: parameter to hold the number
 *
 * description- A program to check the case of an alphabet
 *
 * Return: 0, always
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	} else if(n == 0)
	{
		putchar(48);
		return (0);
	} else
	{
		putchar(45);
		return (-1);
	}
}
