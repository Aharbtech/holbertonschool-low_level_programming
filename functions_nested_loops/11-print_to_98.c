#include <stdio.h>

/**
 * print_to_98 - prints all naturals from n to 98
 * @n: input number to start counting from
 * Return: void
 **/

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	printf("%d \n", 98);
}
