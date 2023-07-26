#include "main.h"
/**
 * jack_bauer - print out every min of the day
 */
void jack_bauer(void)
{
	int hour;
	int min;

	min = 0;
	hour = 0;
	while (hour < 24)
	{
		while (min < 60)
		{
			min++;
		}
		hour++;
		_putchar(hour);
		_putchar(':');
		if (min < 10)
			_putchar('0');
		_putchar(min);
	}
}
