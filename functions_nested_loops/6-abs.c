#include "main.h"
/**
 * _abs - Computes absolute value of int
 * @n: integer to input
 * Return: absolute value of int
 **/

int _abs(int n)
{
	if (n >=  0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (0);
}
