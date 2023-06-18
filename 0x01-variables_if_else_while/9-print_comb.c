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

	i = 0;
	while (i < 10)
	{
		putchar(i);
		if (i <= 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}
