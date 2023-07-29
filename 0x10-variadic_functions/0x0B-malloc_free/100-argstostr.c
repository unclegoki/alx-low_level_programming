#include "main.h"
#include <stdlib.h>
/**
  *argstostr - a function to concatenate all args of a program.
  *@ac: args count
  *@av: pointer to array of ac.
  *Return: pointer if successful or null
  */
char *argstostr(int ac, char **av)
{
	int i, j, k, arr_size;
	char *ptr;

	arr_size, k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arr_size++;
			j++;
		}
		arr_size++;
		i++;
	}
	ptr = malloc((sizeof(char) * arr_size) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[k] = av[i][j];
			j++;
			k++;
		}
		ptr[k] = '\n';
		k++;
		i++;
	}
	ptr[k] = '\0';
	return (ptr);
}
