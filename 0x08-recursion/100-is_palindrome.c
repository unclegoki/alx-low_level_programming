#include "main.h"
/**
 * check - run all the functions
 * @s: the string to be checked
 * @i: An iterator variable
 * @str_len: length of string
 * Return: 1 or 0
 */
int check(char *s, int i, int str_len);
int _strlen_recursion(char *s);
int is_palindrome(char *s);

int check(char *s, int i, int str_len)
{
	if (*s == 0)
		return (1);

	if (*(s + i) != (*(s + str_len - 1)))
		return (0);

	if (i >= str_len)
		return (1);
	return (check(s, i + 1, str_len - 1));
}
/**
 * _strlen_recursion -  Calculates the length of a string recursively
 *
 * @s: The string in question
 *
 * Return: the length o fthe string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 *is_palindrome - checks if a string is a palindrome
 *@s: the string to be checked
 *Return: 1 or 0
 */
int is_palindrome(char *s)
{
	return (check(s, 0, _strlen_recursion(s)));
}
