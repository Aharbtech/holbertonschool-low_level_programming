#include "main.h"

char *_strcat(char *dest, char *src)
{
	char *ptr;

	int len_dest = _strlen(*dest);
	int len_src = _strlenchar(*src);;

	for (int i = 0; i < len_dest; i++)
	{
		ptr[i] = dest[i];
	}
	
	for (int j = 0; j <= len_ptr;  j++)
	{
		ptr[len_dest + j] = src[j];
	}
	
	return(*ptr);
}


/**
 *OR
 *
 * while (*dest != '\0')
 * 	*ptr = *dst;
 * 	ptr++;
 * 	dst++;
 */