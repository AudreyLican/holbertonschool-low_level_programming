#include "main.h"

/**
* *_strchr - function that locates a character in a string
* @s : pointer on string to search
* @c : target character
*
* Return: character find in the string
*/

char *_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (NULL);
}
