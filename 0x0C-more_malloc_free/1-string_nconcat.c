#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - a function that concatenates 2 strings
*@s1: string 1
*@s2: string 2
*@n: n bytes of s2
*Return:  pointer to the allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_out;
	unsigned int ns1, ns2, nsout, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (ns1 = 0; s1[ns1] != '\0'; ns1++)
		;

	for (ns2 = 0; s2[ns2] != '\0'; ns2++)
		;

	if (n > ns2)
		n = ns2;

	nsout = ns1 + n;

	str_out = malloc(nsout + 1);

	if (str_out == NULL)
		return (NULL);

	for (i = 0; i < nsout; i++)
		if (i < ns1)
			str_out[i] = s1[i];
		ense
			str_out[i] = s2[i - ns1];

	str_out[i] = '\0';

	return (str_out);
}
