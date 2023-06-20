#include <stdio.h>
/**
 * print_alphabet_x10- prints alphabets 10 times
 *
 * description- this program uses the while loop and funcitons
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	i = 1;
	while (i <= 10)
	{
		a = 97;
		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
		i++;
	}
	putchar(10);
}
