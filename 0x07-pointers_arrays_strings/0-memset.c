#include "main.h"
/**
 * _memset - fill the first byte of memory area
 * @s: the location to be filled
 * @b: the char to be filled with
 * @n: number of time s will be filled
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		s[i] = b;
	}
	return s;
}
