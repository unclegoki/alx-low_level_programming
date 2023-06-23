#include "main.h"
/**
 * main - Entry point
 * _isupper - this function tests a letter
 * @c: a parameter accepted by the above function to hold the letter beign tested 
 *
 * description - A program that checks the case of letters
 * Return: 0, always
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
