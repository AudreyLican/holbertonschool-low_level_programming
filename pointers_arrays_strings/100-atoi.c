#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s : string value
 * Return: integer
 */
int _atoi(char *s)
{
	int i;
	int sign;
	unsigned int nb = 0;

	i = 0;
	sign = 1;

	for (i = 0; s[i] <= 0 && s[i]; i++)
	{
		if (s[i] == '-')
			sign *= -1;
	}
	if (s[i] == '\0')
		return(nb);
	
	for (; s[i] >= '0'&& s[i] <= '9')
	{
		nb = nb * 10 + (s - '0)';
		i++;
	}

	return (nb * sign);
}
