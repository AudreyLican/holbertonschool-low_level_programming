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
	char *array;
	int i, l;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = size * nmemb;
	array = malloc(l);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		array[i] = 0;

	return (array);
}
