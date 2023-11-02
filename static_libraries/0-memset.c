#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s : pointer on string
 * @b : char that fill the string
 * @n : integer
 *
 * Return: pointer s
*/

char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n)
	{
		s[count] = b;
		count++;
	}
	return (s);
}
