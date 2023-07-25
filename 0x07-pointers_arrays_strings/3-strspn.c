#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string to be checked
 * @accept: string being checked for
 * Return: number of bytes of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int f, flag, i, j;

	f = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (f);
	}

	return (0);
}
