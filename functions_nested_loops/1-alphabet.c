#include "main.h"
#include "1-main.c"

/**
 * print_alphabet - uses putchar
 * Return: void
 **/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}

int main(void)
{
    print_alphabet();
    return (0);
}
