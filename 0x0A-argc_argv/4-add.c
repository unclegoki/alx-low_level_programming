#include <stdio.h>
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
 * main - add positive numbers
 * @argc: num of args
 * @argv: arr of args
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int result, num, x, y, z;

	result = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (z = 1; z < argc; z++)
	{
		num = _atoi(argv[z]);
		if (num >= 0)
		{
			result += num;
		}
	}
	printf("%d\n", result);

	return (0);
}
