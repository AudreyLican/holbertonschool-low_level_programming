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

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				nb = (nb * 10) + s[i] - '0';
			}
		}
		i++;
	}
	/*if (sign < 0)
		nb *= sign;*/

	return (nb * sign);
}
