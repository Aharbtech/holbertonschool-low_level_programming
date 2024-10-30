#include <stdio.h>
/**
 * main - PrInTs LiKe ThIs
 * @i: lowercase then lowercase
 * Return: nothing
 **/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i<= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
