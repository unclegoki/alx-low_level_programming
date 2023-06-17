#include <stdio.h>

/**
 * main - Entry point for program
 *
 * description - An app to print all the alphabets
 * Return: Always 0 (Success)
 */
int main(void){
	char a;
	int n;
	char newLine;

	newLine = '10';
	a = '97';
	n = 1;
	while (n < 27){
		putchar(a);
		putchar(newLine);
		a++;
		n++;
	}
	return (0);
}
