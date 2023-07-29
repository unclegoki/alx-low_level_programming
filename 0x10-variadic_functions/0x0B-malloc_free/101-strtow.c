#include <stdlib.h>
#include "main.h"

/**
 * count_word - a function to count the num of words in a string
 * @s: string to be checked
 *
 * Return: pointer to an array of words
 */
int count_word(char *s)
{
	int x, c, w;

	x = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			x = 0;
		else if (x == 0)
		{
			x = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to array or null
 */
char **strtow(char *str)
{
	char **arr, *temp;
	int i, k, length = 0;
	int words, c = 0;
	int first, last;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	arr = (char **) malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				last = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (first < last)
					*temp++ = str[first++];
				*temp = '\0';
				arr[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			first = i;
	}

	arr[k] = NULL;

	return (arr);
}
