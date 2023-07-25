#include "main.h"
/**
 * _strchr - locate a char in a string
 * @s: string to be checked
 * @c: char to be searched for
 * Return: 1
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		a = *s++;
		if (a == 0)
			return (NULL);
	}

	return (s - 1);
}
