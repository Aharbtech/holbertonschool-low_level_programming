/**
 * _strlen - Calculate length string
 * @s: intput string
 * Return: length i
 **/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{	s++;
		i++;
	}
	return (i);
}
