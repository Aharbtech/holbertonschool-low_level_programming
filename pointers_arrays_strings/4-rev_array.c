#include "main.h"

/**
 * reverse_array - Reverse array of ints
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int b;

	while (i < n / 2)
	{
		b = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = b;
		i++;
	}
}
