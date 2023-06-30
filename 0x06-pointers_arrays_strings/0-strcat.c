#include <stdio.h>
/**
 * _strcat - concatenates 2 strings
 * @dest: first string
 * @src: second string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	*dest += *src;
	return *dest;
}
