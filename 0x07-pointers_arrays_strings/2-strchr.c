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

	for (i = 0; s[i] != '\0'; i++)
	{
		a = *s++;
		if (a == 0)
			return (NULL);
		if (a == 1)
			return (s - 1);
	}
}
