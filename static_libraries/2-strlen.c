#include "main.h"

/**
* _strlen - function that returns the length of a string
* @s : pointer
*
* Return: return value
*/
int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
