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
	j = 0;
	while (i < 10)
	{
		putchar(i);
		i++;
		while (j < 10)
		{
			putchar(j);
			j++;
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
