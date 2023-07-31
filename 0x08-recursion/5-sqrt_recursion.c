#include "main.h"
/**
 * checknums - computes square root recursively using binary search
 * @firstnum: inital number
 * @secnum: last number within the range
 * @m: the given num
 * Return: sqrt of num
*/

int checknums(int firstnum, int secnum, int x)
{
	long int guessnum;

	if (secnum >= firstnum)
	{
		guessnum = firstnum + (secnum - firstnum) / 2;
		if (guessnum * guessnum == x)
			return (guessnum);

		if (guessnum * guessnum > x)
			return (checknums(firstnum, guessnum - 1, x));
		if (guessnum * guessnum < x)
			return (checknums(guessnum + 1, secnum, x));
	}
	return (-1);
}
/**
 * _sqrt_recursion - finds the sqrt of a num
 * @n: the number whose sqrt is to be found
 * Return: sqrt or -1 if num is less than 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (checknums(1, n, n));
}
