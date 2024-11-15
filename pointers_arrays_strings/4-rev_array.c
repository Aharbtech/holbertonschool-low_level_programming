#include "main.h"

/**
 * reverse_array - Reverse array of ints
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int *c = a;
	int i = 0;
	n = 0;

	while (*c != '\0')
	{
		c++;
		n++;
	}

	while (n >= 0)
	{
		a[i] = c[n];
		i++;
		n--;
	}
}
