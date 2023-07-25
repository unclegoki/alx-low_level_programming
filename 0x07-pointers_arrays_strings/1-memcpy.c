#include "main.h"
/**
 * _memcpy - copy memory location
 * @dest: destination
 * @src: source of data to be copied
 * @n: number of data to be copied
 * Return: Returns the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
