#include <stdio.h>
/**
 * main - This is hthe entry point of the program
 * description - This program prints the size of data types
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(s) \n", sizeof(char));
	printf("Size of a int: %ld byte(s) \n", sizeof(int));
	printf("Size of a long int: %ld byte(s) \n", sizeof(long int));
	printf("Size of a long long: %ld byte(s) \n", sizeof(long long int));
	printf("Size of a float: %ld byte(s) \n", sizeof(float));
	return (0);
}
