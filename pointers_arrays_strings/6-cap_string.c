#include "main.h"

/**
 * _alphanum - function to look for other that letters & numbers
 * @c : char value
 *
 * *cap_string -  function that capitalizes all words of a string
 * @str : string
 *
 * Return: string capitalizes
 */

int _alphanum(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}

char *cap_string(char *str)
{
	int i = 0;

	/*while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}*/
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (_alphanum(str[i - 1]) || i == 0))
			str[i] -= 32;
		i++;
	}
	return (str);
}
