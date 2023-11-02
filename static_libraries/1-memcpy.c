#include "main.h"

/**
* *_memcpy - function that copies memory area
* @dest : destination for the string
* @src : string source
* @n: byte
*
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
