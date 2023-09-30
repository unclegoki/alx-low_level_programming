#include "main.h"
/**
 *_guess_number - to compute the square root and return it
 *
 * @number: the number to be processed
 * @guessed_number: guess a number to process with
 *
 * Return: a number, which is the square root
 */
int _guess_number(int number, int guessed_number)
{
        if (guessed_number * guessed_number > number)
                return (-1);
        if (guessed_number * guessed_number == number)
                return (guessed_number);

        return (_guess_number(number, guessed_number + 1));
}

/**
 * _sqrt_recursion - Find square root of a number
 * @n: the number to test
 * Return: square root of the number
 *
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	return (_guess_number(n, 0));
}
