#include "main.h"
/**
 * _strdup - returns the pointer to a copy of a string
 * @str: the string
 * Return: location of string or null
 */
char *_strdup(char *str)
{
	char *strcpy;
	unsigned int i, strlen;

	i = 0;
	strlen = 0;

	if (str == NULL)
		return (0);

	while (str[strlen])
		strlen++;

	strcpy = malloc(sizeof(char) * (strlen + 1));
	if (!strcpy)
		return (0);
	while (str[i] != '\0')
	{
		strcpy[i] = str[i];
		i++;
	}
	return (strcpy);
}
