#include <stdio.h>
/**
 * _isalpha- checks if a character is an alphabet
 * @c: parameter to hold the character
 *
 * description- A program to check the case of an alphabet
 *
 * Return: 0, always
 */
int _isalpha(int c)
{
	if (((c > 97) && (c < 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}
