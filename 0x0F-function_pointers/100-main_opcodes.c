#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of args
 * @argv: array of args
 * Return: returns 0 on success
 */
int main(int argc, char **argv)
{
	int my_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	my_bytes = atoi(argv[1]);

	if (my_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < atoi(argv[1]))
	{
		printf("%02x", *((unsigned char *)main + i));
		i++;
		if (i < atoi(argv[1]))
			putchar(' ');
	}
	putchar('\n');
	return (0);
}

