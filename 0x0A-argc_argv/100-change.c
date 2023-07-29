#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _atoi - convert string to int
 * @s: The string to be converted
 *
 * Return: the int equiv of  s
 */
int _atoi(char *s)
{
	int i, j, k, l, m, digit;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	m = 0;
	digit = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && m == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			k = k * 10 + digit;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}

	if (m == 0)
		return (0);

	return (k);
}
/**
 * main - a program that prints the minimum
 * number of coins to make change for an amount of money.
 * @argc: num of args
 * @argv: array of args
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = _atoi(argv[1]);
	result = 0;

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= coins[j])
		{
			result++;
			i -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
