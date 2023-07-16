#include "main.h"
/**
 * print_numbers - to print numbers
 */
void print_numbers(void)
{
	int num;

	num = 0;
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar(10);
}
