#include <stdio.h>
/**
 * main- Entry point
 *
 * description- Alphabet print funcion
 * Return: 0, always
 */
void print_alphabet(void)
{
	char a;
	a = 97;
	while(a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar(10);
}
int main(void)
{
	return (0);
}
