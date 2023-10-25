#include "main.h"

/**
* *cap_string -  function that capitalizes all words of a string
* @str: string
*
* Return: string capitalizes
*/

char *cap_string(char *str)
{
	int	i= 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			&& (str[i - 1] 
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
