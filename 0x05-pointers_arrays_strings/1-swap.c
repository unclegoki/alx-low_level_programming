#include <stdio.h>
/**
 * swap_int - swaps variables
 * @a: First argument
 * @b: Seond argument
 */
void swap_int(int *a, int *b)
{
	int *text;
       
	text = *a;
	*a = *b;
	*b = text;
}
