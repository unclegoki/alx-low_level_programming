#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * on_errors - handles errors for main function
 */
void on_errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - calculate the product of two +ve nums
 * @argc: num of args
 * @argv: array of args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *x, *y;
	int num1, num2, len, i, rem, first_digit, sec_digit, *result, a = 0;

	x = argv[1], y = argv[2];
	if (argc != 3 || !is_digit(x) || !is_digit(y))
		on_errors();
	num1 = _strlen(x);
	num2 = _strlen(y);
	len = num1 + num2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= num1 + num2; i++)
		result[i] = 0;
	for (num1 = num1 - 1; num1 >= 0; num1--)
	{
		first_digit = x[num1] - '0';
		rem = 0;
		for (num2 = _strlen(y) - 1; num2 >= 0; num2--)
		{
			sec_digit = y[num2] - '0';
			rem += result[num1 + num2 + 1] + (first_digit * sec_digit);
			result[num1 + num2 + 1] = rem % 10;
			rem /= 10;
		}
		if (rem > 0)
			result[num1 + num2 + 1] += rem;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

