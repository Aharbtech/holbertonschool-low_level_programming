#include "main.h"

void puts_half(char *str)
{
	int length_of_the_string = _strlen(char *s);
	
	if (length_of_the_string % 2 == 0)
	{	
		int n = length_of_the_string / 2;
		
		while (*str != '\0')
			_putchar(*str[n]);
			n++;
	}
	
	else if (length_of_the_string % 2 != 0)
	{	
		int n = (length_of_the_string - 1) / 2;
		
		while (*str != '\0')
		_putchar('str[n]');
		n++;
	}
	_putchar('\n');
}	
