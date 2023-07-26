#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints up to 98
 * from any given number
 * @n: arg to be printed from
 * Return: numbers
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
		printf("\n");
	} else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
		printf("\n");
	}
}
