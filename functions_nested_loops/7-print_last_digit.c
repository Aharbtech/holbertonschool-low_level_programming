#include "main.h"
/**
 * print_last_digit - prints last digit of an integer
 * @n: number input
 * Return: last digit
 **/

int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	n = n % 10;
	_putchar('0' + n);
	return (n);
}
