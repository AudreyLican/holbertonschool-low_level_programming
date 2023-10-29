#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring
* @s : string to scan
* @accept : find char/bytes
*
* Return: i
*/

unsigned int	_strspn(char *s, char *accept)
{
	unsigned int	i, j, match = 0;/*scan throught string*/

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;

		i++;
	}

	return (match);
}
