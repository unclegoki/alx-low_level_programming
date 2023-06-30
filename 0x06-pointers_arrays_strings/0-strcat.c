#include <stdio.h>
/**
 * _strcat - concatenates 2 strings
 * @dest: first string
 * @src: second string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i,j;

	i,j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return dest;
}
