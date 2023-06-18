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
    int ch;
    int d;
    ch = 65;
    i = 48;
    while(i < 58)
    {
        putc(i, stdout);
        i++;
    }
    putchar(10);
    return (0);
}
