#include "main.h"
/**
 * _isalpha - checks if alphanumeric
 * @c: char to check
 * Return: 1 if true, 0 if not
 **/

int _isalpha(int c)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);

		else
		{
			for (j = 'A'; j <= 'Z'; j++)
			{
				if (c == j)
					return (1);
			}
		}
	}

	return (0);
}
