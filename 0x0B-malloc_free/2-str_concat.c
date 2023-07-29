#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - a function to concatenates 2 strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to new string, or null if failed
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int i = 0, j = 0, str1 = 0, str2 = 0;

	while (s1 && s1[str1])
		str1++;
	while (s2 && s2[str2])
		str2++;

	new_str = malloc(sizeof(char) * (str1 + str2 + 1));
	if (new_str == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < str1)
		{
			new_str[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (str1 + str2))
		{
			new_str[i] = s2[j];
			i++;
			j++;
		}
	}
	new_str[i] = '\0';

	return (new_str);
}
