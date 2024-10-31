#include <stdio.h>
/**
 * main - Print single digit numbers
 * @i: digit
 * Return: nothing
 **/

int main(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');
	return(0);
}
