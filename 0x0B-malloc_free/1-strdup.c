#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - a function to copy a string given as a param
 * @str: string to duplicate
 *
 * Return: pointer to the string copied or null
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, strlen;

	i = 0;
	strlen = 0;

	if (str == NULL)
		return (NULL);

	while (str[strlen])
		strlen++;

	duplicate = malloc(sizeof(char) * (strlen + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[i] = str[i]) != '\0')
		i++;

	return (duplicate);
}
