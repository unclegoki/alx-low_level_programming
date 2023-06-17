#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point for the program
 *
 * desription - This program prints out the last digit
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	} else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastNum);
	} else
	{
		printf("Last digit of %d is %d and is less than and not 0\n", n, lastNum);
	}
	return (0);
}
