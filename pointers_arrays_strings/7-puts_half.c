#include "main.h"

void puts_half(char *str)
{
	int length_of_the_string = _strlen(str);
	
	if (length_of_the_string % 2 == 0)
	{	
		int n = length_of_the_string / 2;
		
		while (*str != '\0')
		{	_putchar(str[n]);
			n++;
		}
	}
	
	else if (length_of_the_string % 2 != 0 && length_of_the_string != 1)
	{	
		int n = (length_of_the_string - 1) / 2;
		
		while (*str != '\0')
		{	_putchar(str[n]);
			n++;
		}
	}
	else if (length_of_the_string == 1)
	{
		_putchar(str[0]);
	}
	_putchar('\n');
}	
