#include <unistd.h>
/**
 * _putchar - customised putchar function
 * @c : char to be printed
 * Return: value of char entered 
*/

void _putchar(int c)
{
	write(1, &c, 1);
}
