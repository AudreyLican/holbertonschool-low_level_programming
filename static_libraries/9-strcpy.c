#include "main.h"

/**
* *_strcpy - unction that copies the string pointed
* @dest : pointer to dest, variable to stock copy of src
* @src : pointer to src value
* Return: dest with null byte
*/
char *_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
