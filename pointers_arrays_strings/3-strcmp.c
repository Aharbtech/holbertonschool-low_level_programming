#include "main.h"
/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
 * Return: Description of the returned value
 **/

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2); 	
		}
		
		else 
		{	
			return (0);
		}
	}
	
	return (0);
}


