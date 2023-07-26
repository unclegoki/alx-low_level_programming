#include "main.h"
/**
 * time_table - prints out times table till 9
 */
void times_table(void)
{
	int i, j, k;

	for(i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar(k + '0');
			}
			if (k > 0 && k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}else if(k > 0 && k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
		}
		_putchar ('\n');
	}
}
