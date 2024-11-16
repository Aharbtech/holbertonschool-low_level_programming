#include "main.h"
/**
 * string_toupper - Turns lowercase into Uppercase
 * @*: characters
 * Return: 0
 */

char *cap_string(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		if (s[i] == ',' ||
	     		s[i] == ';' ||
			s[i] == '.' ||
			s[i] == '!' ||
			s[i] == '?' ||
			s[i] == '"' ||
			s[i] == '(' ||
			s[i] == ')' ||
			s[i] == '{' ||
			s[i] == '}' ||
			s[i] == ' ' ||
			s[i] == '\t' ||
			s[i] == '\n')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{	
				s[i + 1] -= 32;
			}
		}
		i++;
	}	

	if (s[0] >= 'a' && s[0] <= 'z')
                {
                	s[0] -= 32;
                }

	return (s);
}
