#include "main.h"
/**
 * print_rev - Prints string in reverse
 * @s: String to reverse
 * Return: Void
 **/

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	s--;

	while (i > 0)
	{
		_putchar(*s);
		i--;
		s--;
	}
	_putchar('\n');
}
