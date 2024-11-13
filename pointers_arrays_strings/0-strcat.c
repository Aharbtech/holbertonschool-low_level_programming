#include "main.h"

char *_strcat(char *dest, char *src)
{
	char *ptr;

	int len_dest = ;
	int len_src = ;

	int len_ptr = len_dest + len_src;
	
	for (int i = 0; i < len_dest; i++)
	{
		ptr[i] = dest[i];
	}
	
	for (int j = len_dest; j >= len_src; j++)
	{
		ptr[j] = src[j];
	}
	
	return(*ptr);
}
