#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min : value
 * @max : value
 *
 * Return: pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int	i, len, *iarray;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;
	iarray = malloc(sizeof(int) * len);
	if (iarray == NULL)
		return (NULL);

	for (i = 0; i < len; i++, min++)
	{
		iarray[i] = min;
	}

	return (iarray);
}
