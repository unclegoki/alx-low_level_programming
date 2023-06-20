#include <stdio.h>
/**
 * _islower- checks if a letter is lowercase
 *
 * description- A program to check the case of an alphabet
 * Return: 0, always
 */
int _islowewr(int c)
{
	if (islower(c))
	{
		return(1);
	} else {
		return (0);
	}
}
