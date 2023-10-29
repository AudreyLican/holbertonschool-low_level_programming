#include "main.h"

/**
* *_strpbrk - function that searches a string for any of a set of bytes
* @s : string to scan
* @accept : accepted characters
*
* Return: the string from the first found accepted char
*/

char *_strpbrk(char *s, char *accept)
{
	int	count, j;

	count = 0;
	while (s[count] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[count] == accept[j])
			{
				return (&s[count]);
			}
			j++;
		}
		count++;
	}
	return (NULL);
}
