#include <stdio.h>
/**
 * main - prints each letter in lowercase, single line
 * @i: lowercase letters
 * Return: 0
 **/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
