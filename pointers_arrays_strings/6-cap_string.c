#include "main.h"

/**
 * _alphanum - function to look for other that letters & numbers
 * @c : char value
 *
 * Return: 0 if alphanum and 1 false
 */
/*int _alphanum(char c)
{

	for (; c != '\0'; c++)
	{
		if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||
			(c >= 'a' && c <= 'z'))
			return (0);
	}
	return (1);
}*/

/**
 * *cap_string -  function that capitalizes all words of a string
 * @str: string
 *
 * Return: str
 */
/*char *cap_string(char *str)
{
	int i = 0;
	int = ((str >= '0' && *str <= '9'), (c >= 'A' && c <= 'Z'), (c >= 'a' && c <= 'z');

	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (_alphanum(str[i - 1]) || i == 0))
			str[i] -= 32;
		i++;
	}
	return (str);
}*/
int ft_alphanum(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}

char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (ft_alphanum(str[i - 1]) || i == 0))
			str[i] -= 32;
		i++;
	}
	return (str);
}
