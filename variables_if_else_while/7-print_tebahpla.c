#include <stdio.h>
/**
 * main - reverses alphabet
 * @i: letters
 * Return: nothing
 **/

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return(0);

}
