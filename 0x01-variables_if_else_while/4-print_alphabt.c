#include <stdio.h>
/**
 *main - Entry point
 *
 *description - Alphabet program
 *Return: 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar(10);
	return (0);
}
