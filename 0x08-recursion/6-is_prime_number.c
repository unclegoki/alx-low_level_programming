#include "main.h"
/**
 * check - This is the checker
 * @n: The number being checked
 * @x: The iterator
 * Return: 1 or 0
 */
int check(int n, int x)
{
	if (x == 1)
		return (1);

	if (n % x == 0 && x > 0)
	{
		return (0);
	}
	return (check(n, x - 1));
}
/**
 * is_prime_number - To chech if a num is a prime number
 * @n: The number to be checked
 * Return: 1 for true or 0 for false
 */
int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}
	return (check(n, n - 1));
}
