#include <stdio.h>
/**
 * main - prints each integer, comma and space  
 * @a: prints ascending integers 
 * Return: nothing
 **/

int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return(0);
}
