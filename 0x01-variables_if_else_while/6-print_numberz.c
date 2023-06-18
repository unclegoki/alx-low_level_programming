#include <stdio.h>
/**
 * main- Entry point
 *
 * description- A program to print numbers 1-10 using putchar
 * Return: 0
*/
int main(void)
{
    int i;

    i = 48;
    while(i < 58)
    {
        putc(i, stdout);
        i++;
    }
    putchar(10);
    return (0);
}
