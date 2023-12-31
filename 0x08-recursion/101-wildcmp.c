#include "main.h"
/**
 * wildcmp - compares to strings, if they are identical
 * @s1: First string to be compared
 * @s2: second striing
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && (*s1 == '\0'))
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	return (0);
}
