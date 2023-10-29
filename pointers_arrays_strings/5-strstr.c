#include "main.h"

/**
* *_strstr - function that locates a substring
* @haystack : string to scan
* @needle : the occurence string to search for
*
* Return: a pointer to the beginning of the located substring or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int	i, j, a;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i]) /*scan through haystack*/
	{
		/* if a byte matches, first char of needle */
		/* interate through needle until match ends */
		if (haystack[i] == needle[0])
		{
			j = 0;
			a = i;
			while (needle[j] != '\0')
			{
				if (haystack[a] == needle[j])
				{
					j++;
					a++;
				}
				else
					break;
			}
			/* if matched, return haystack */
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (NULL); /* if no match */
}
