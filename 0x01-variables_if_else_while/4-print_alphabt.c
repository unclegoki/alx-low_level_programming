#include <stdio.h>
/**
 * main - Entry poing
 * 
 * description - Alphabet program
 * Return 0
 */
int main(void)
{
	char c;

	while (c <= 'z')
	{
		if(c != 'q' && c != 'e')
		{
			putchar(c);
		}
		putchar(10);
	}
	return (0);
}
