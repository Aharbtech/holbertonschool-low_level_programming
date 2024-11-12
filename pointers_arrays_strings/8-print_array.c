#include "main.h"

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
		printf("%s, ", *a[i]);
	printf("%s\n", *a[n]);
}
