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
		putchar(j + '0');
	putchar('\n');
	return(0);
}
