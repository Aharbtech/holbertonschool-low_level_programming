#include "main.h"

void puts_half(char *str)
{
	int length_of_the_string = 0;
	int n;
	char *str1 = str;

	while (*str1 != '\0')
	{
		str1++;
		length_of_the_string++;
	}

	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	
	else if (length_of_the_string % 2 != 0)
	{
		n = (length_of_the_string - 1) / 2;
		n++;

		while (*str != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}

	_putchar('\n');
}	
