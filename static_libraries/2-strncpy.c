#include "main.h"

/**
* *_strncpy - a function that copies a string to n characters
* @dest : string destination
* @src : string source
* @n : interger for the number of characters to prints
*
* Return: dest, copy of src to n characters
*/

char *_strncpy(char *dest, char *src, int n)
{
	int	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
