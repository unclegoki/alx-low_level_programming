#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: num of arguments
 * @argv: array of args
 *
 * Return: 0 for success or 1 for error
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
