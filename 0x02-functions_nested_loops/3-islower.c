#include <stdio.h>
/**
 * _islower- checks if a letter is lowercase
 *
 * description- A program to check the case of an alphabet
 * Return: 0, always
 */
int _islower(int c)
{
	if (!(c < 97) || !(c > 122))
	{
		return(1);
	} else {
		return (0);
	}
}
