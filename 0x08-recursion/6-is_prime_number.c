#include "main.h"
/**
 * find_prime_number - function to calculate
 * if a number is a prime num using recursion
 * @i: the num to evaluate
 * @j: arg to iterate
 *
 * Return: 1 if i is prime, 0 if not
 */
int find_prime_number(int i, int j)
{
	if (j == 1)
		return (1);
	if (i % j == 0 && j > 0)
		return (0);
	return (find_prime_number(i, j - 1));
}
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime_number(n, n - 1));
}

