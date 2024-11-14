#include "main.h"

void print_rev(char *s)
{
	int i = 0;	
	while (*s != '\0')
	{
		i++;
		s++;
	}

	s--;

	while (i >= 0) 
	{
		_putchar(*s);
		i--;
		s--;
	}
	_putchar('\n');
}
