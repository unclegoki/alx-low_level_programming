#include <stdio.h>

/**
 * main - Entry point for program
 *
 * description - An app to print all the alphabets
 * Return: Always 0 (Success)
 */
int main(void){
	char a;
	char newLine;

	a = 'a';
	while (a <= 'z' ){
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
