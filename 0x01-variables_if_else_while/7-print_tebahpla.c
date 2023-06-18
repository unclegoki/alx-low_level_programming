#include <stdio.h>

/**
 * main- Entry point
 *
 * description- This program prints the alphabets in reverse form;
 * Return: 0, always
*/
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar(10);
	return (0);
}
