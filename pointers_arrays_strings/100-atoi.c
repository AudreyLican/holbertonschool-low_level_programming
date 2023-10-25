#include "main.h"

/**
* _atoi - function that convert a string to an integer
* @s : string value
* Return: integer
*/
int _atoi(char *s)
{
	int	i;
	int	sign;
	unsigned int	nb;

	i=0;
	sign = 1;
	nb = 0;
	while ((s[i] >= 9 && s[i] <= 13) || (s[i] == 32))
		i++;
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	if (s[i] == 0)
		return (nb);

	while (s[i] >= '0' && s[i] <= '9')
	{
		nb = (nb * 10) + s[i] - '0';
		i++;
	}
	return (nb * sign);
}
