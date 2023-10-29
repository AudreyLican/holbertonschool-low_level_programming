#include "main.h"

/**
* *_strchr - function that locates a character in a string
* @s : pointer on string
* @c : char to look for
*
* Return: s
*/

char *_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
	return NULL;
}
