#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program to perform simple operations
 * @argc: number of args
 * @argv: an array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int first_arg, sec_arg, res;
	char operator;

	int (*func)(int, int);
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first_arg = atoi(argv[1]);
	sec_arg = atoi(argv[3]);
	
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	operator = *argv[2];

	if ((operator == '/' || operator == '%') && sec_arg == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = func(first_arg, sec_arg);
	printf("%d\n", res);
	return (0);
}
