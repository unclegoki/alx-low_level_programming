#include "main.h"
/**
 * _isupper - this function tests a letter
 * @c: a parameter accepted by the above function to hold the letter beign tested
 * Return: 1, always
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
