#include "main.h"

/**
* rev_string - function that reverses a string
* @s : pointer on string
*
*/
void rev_string(char *s)
{
	int	len, i, j;
	char	tmp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	i = 0;
	j = len -1;
	while ( i < j / 2)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
		i++;
		j--;
	}
}
