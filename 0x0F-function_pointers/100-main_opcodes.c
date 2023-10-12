#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of args
 * @argv: array of args
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	int my_bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	my_bytes = atoi(argv[i]);

	if (my_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < my_bytes; i++)
	{
		if (i == my_bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}

