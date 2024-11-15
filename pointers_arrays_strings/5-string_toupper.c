#include "main.h"
/**
 * string_toupper - Turns lowercase into Uppercase
 * @*: characters
 * Return: 0
 */

char *string_toupper(char *s)
{
	int i = 0;
	
	while (*s != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			i++;
		}
	s++;
	}

	return (s);
}
