#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: Destination Array
 * @src: Source Array
 * Return: Concatenated String
 **/

char *_strncat(char *dest, char *src, int n)
{
	CONDITION IF N IS NEGATIVE, END NOW; THIS IS DIFF FROM IF N NOT NEGATIVE DO THIS

        char *ptr = dest;

        while (*dest != '\0')
        {
                dest++;
        }
	
	WHILE LOOP FOR LENGTH SRC

	int i = 0;
	
	if n <= LENGHT SRC

		while (i <= n)
	   	{
                *dest = *src;
                dest++;
                src++;
		i++;
	  	}	

	else if n > LENGHT SRC
	       	while (i <= LENGHT SRC)
        {
                *dest = *src;
                dest++;
                src++;
        }
	

	ADD HERE SO ITS DONE EVEN IF THERE EXISTS MISTAKES IN MY IFS ELIEFS
	*dest = '\0';
        
	return (ptr);
}
