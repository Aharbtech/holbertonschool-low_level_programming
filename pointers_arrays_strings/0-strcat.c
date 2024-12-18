#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: Destination Array
 * @src: Source Array
 * Return: Concatenated String
 **/

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
}
