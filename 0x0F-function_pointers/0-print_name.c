#include "function_pointers.h"
/**
 * print_name - A function to print a name
 * @name: Pointer to the name
 * @f: Function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
