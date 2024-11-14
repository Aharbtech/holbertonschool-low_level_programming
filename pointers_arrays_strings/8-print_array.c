#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints array
 * @a: array of ints
 * @n: number of elements
 * Return: Void
 **/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}

	if (n > 0)
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
