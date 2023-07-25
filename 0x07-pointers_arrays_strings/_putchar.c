#include <unistd.h>

/**
 * _putchar - writes a char to stdoout
 * @c: the char to print to the screen
 * Return: 1, success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
