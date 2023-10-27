#include "main.h"

/**
 * _alphanum - function to look for other that letters & numbers
 * @c : char value
 *
 * Return: 0 if alphanum and 1 false
 */
int _alphanum(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/**
 * *cap_string -  function that capitalizes all words of a string
 * @str: string
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			if (!(_alphanum(str[i - 1]) || i == 0))
				str[i] -= 32;
		i++;
	}
	return (str);
}
