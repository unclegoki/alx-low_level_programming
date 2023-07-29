#include <stdio.h>
#include "main.h"
/**
 * main - pringt all args
 * @argc: number of args
 * @argv: an array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int args;

	for (args = 0; args < argc; args++)
	{
		printf("%s\n", argv[args]);
	}

	return (0);
}
