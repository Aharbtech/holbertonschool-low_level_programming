#include "main.h"

void puts_half(char *str)
{
	int n = (_strlen(*str) - 1) / 2;

		if (n % 2 == 0)
		{	
			while (n <= _strlen(*str) - 1)	
			_putchar('str[n]');
			n--;
		}
		else if (n % 2 != 0)
		{
			_putchar('str[n]');
		}
	_putchar('\n');
}	
