#include "main.h"

/**
* *_strncat - function that concatenates two strings on n characters
* @dest : string destination
* @src : string source
* @n : integer that define the number of characters to print
*
* Return: dest string concatenate with src on n bytes
*/

char *_strncat(char *dest, char *src, int n)
{
	int	i = 0;
	int	j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
