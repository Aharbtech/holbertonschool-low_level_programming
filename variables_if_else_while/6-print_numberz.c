#include <stdio.h>
/**
 * main - Print single digit numbers
 * @j: digit
 * Return: nothing
 **/

int main(void)
{
	int j;

	for (j = 0; j < 10; j++)
		putchar("%i", j);
	putchar('\n');
	return(0);
}
