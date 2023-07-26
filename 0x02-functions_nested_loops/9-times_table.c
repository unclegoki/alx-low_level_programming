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
			if (k < 10)
			{
				_putchar(' ');
			}else
			{
				_putchar('0' + k / 10);
			}
			_putchar('0' + k % 10);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar ('\n');
	}
}
