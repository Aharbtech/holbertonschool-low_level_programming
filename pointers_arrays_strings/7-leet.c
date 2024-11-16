#include "main.h"
/**
 * leet - LEET
 * @s: Regular Speak
 * Return: 1337
 **/

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char *l = "aAeEoOtTlL";
	char *n = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; j <= 9; j++)
		{	
			if (s[i] == l[j])
			{	
				s[i] = n[j];
			}
		}
	i++;
	}

	return (s);
}
