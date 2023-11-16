#include "function_pointers.h"
#include <stdlib.h>

/**
* int_index - function that searches for an integer.
* @array : array to scan
* @size : number pf elements of the array to scan
* @cmp : pointer to a function to be used to compare values
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++;
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
