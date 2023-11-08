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
	int	i, *iarray;

	if (min > max)
		return (NULL);

	iarray = malloc(sizeof(int *) * (max - min) + 1);
	if (iarray == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		iarray[i] = min;
	}

	return (iarray);
}
