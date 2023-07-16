#include <stdio.h>

/**
 * main- Entry point
 *
 * description- This program prints the alphabets in reverse form;
 * Return: 0, always
*/
int main(void)
{
	int i;
	int j;

	i = 0;
	while (i < 100) {
	putchar(i / 10 + '0');
	putchar(i % 10 + '0');
	if (i < 89)
	{
		putchar(',');
		putchar(' ');
		}
		i++;
	}
	return (0);
}
