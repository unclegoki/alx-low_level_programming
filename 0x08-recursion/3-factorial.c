#include "main.h"
/**
 * factorial - Prints the factorial of a number
 *
 * @n: The number
 *
 * Return: The factorial as result
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
