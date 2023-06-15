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

	printf("Size of a char: %lu byte(s) \n", (unsigned long)sizeof(c));
	printf("Size of a int: %lu byte(s) \n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s) \n", (unsigned long)sizeof(l));
	printf("Size of a long long: %lu byte(s) \n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte(s) \n", (unsigned long)sizeof(f));
	return (0);
}
