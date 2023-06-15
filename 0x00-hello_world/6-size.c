#include <stdio.h>
/**
 * main - This is hthe entry point of the program
 * description - This program prints the size of data types
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	c = 'C';
	i = 4;
	l = 4;
	ll = 5;
	f = 5;

	printf("Size of a char: %c\n", c);
	printf("Size of a intr: %d\n", i);
	printf("Size of a long int: %l\n", l);
	printf("Size of a long long: %l\n", ll);
	printf("Size of a float: %d\n", f);
}
