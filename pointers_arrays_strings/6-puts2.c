#include "main.h"
/**
 * puts2 - Prints Every Other Char
 * @str: String
 * Return: Void
 **/
void puts2(char *str)
{
	while (*str != '\0' && *str + 1 != '\0')
	{	
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
