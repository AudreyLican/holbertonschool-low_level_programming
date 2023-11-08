#include "main.h"

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb : array
 * @size : byre of each elementsof nmemb
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);
	_memset(array, 0, size * nmemb);

	return (array);
}

/**
 * *_memset - function that fills memory with a constant byte.
 * @s : pointer on string
 * @b : char that fill the string
 * @n : integer
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		s[count] = b;
		count++;
	}
	return (s);
}
