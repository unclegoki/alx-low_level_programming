#include <stdio.h>
#include "main.h"

/**
 * main - print the num of args
 * @argc: num of args
 * @argv: an array of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

