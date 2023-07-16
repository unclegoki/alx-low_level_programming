#include "main.h"
/**
 * _puts_recursion - print a string and a new line
 *
 * description - a program to simulate the puts fxn
 * @s: pointer of arg
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
