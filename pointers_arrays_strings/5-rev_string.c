#include "main.h"

void rev_string(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	
	i--;
	
	char c;	
	int x;

	for (x = 0; x <= i; x++)
	{
		c = s[x];
		s[i] = c;
		i--;
	}
}
