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
	int	count = 0;;

	if (*s == '\0')
	{
		return (0);
	}

	while (s[count] != '\0')
	{
		if (s[count] == c)
		{
			return (&s[count]);
		}
		count++;
	}
	return (0);
}
