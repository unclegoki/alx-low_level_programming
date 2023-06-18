#include <stdio.h> 
/** 
  *main- Entry point
  *
  *description- print numbers from 1 - 10
  *Return: 0, always
  */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d\n", i);
		i++;
	}
	return (0);
}
