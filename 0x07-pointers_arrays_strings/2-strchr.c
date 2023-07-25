#include "main.h"
#include <stdio.h>
/**
 * _strchr - locate a char in a string
 * @s: string to be checked
 * @c: char to be searched for
 * Return: 1
*/
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
			return (s - 1);
		if (i == 0)
			return (NULL);
	}
}
