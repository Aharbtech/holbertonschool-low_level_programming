#include "main.h"

void print_rev(char *s)
{
	int len;
	len = _strlen(s) - 1;
	
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
