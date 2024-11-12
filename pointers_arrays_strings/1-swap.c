/**
 * swap_int - Swaps the inputs
 * @a: First int
 * @b: 2nd int
 * Return: Nothing
 **/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
