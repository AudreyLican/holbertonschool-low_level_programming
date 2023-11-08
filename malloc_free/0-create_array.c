#include "main.h"

/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size : give a size
 * @c : character to take size of
 * Return: Null
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
	{
		s[n] = c;
	}
	return (s);
}
