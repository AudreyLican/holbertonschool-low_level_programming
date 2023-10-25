#include "main.h"

/**
* *string_toupper - function that changes all lowercase letters 
* of a string to uppercase
* @str: string
*/

char *string_toupper(char *str)
{
	int	i = 0;

	while (str[i]  != '\0')
	{
		if (i > 97 && i < 122)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
