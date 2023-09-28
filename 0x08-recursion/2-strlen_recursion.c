#include "main.h"

/*
 * _strlen_recursion - Prints the string's length
 * @s: The string in question
 * Return: the length o fthe string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + (_strlen_recursion(s + 1)));
}
