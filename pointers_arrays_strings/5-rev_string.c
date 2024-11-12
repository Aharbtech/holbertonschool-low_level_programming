#include "main.h"

void rev_string(char *s)
{
	int len = _strlen(s) - 1;
	char *c;
	int i = 0;
	
	while (len >= 0)
	{
		c[i] = s[len];
		i++;
		len--;
	}
}
