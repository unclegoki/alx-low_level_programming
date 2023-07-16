#include "main.h"
/**
 * print_numbers - to prcharnumbers
 */
void print_numbers(void)
{
	char num;

	num = '0';
	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
