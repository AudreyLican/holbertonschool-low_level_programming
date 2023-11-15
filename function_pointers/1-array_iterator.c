#include "function_pointers.h"

/**
* array_iterator - function that executes a function given,
* as a parameter on each element of an array.
* @array : array to execute
* @size : lenght of the array
* @action : pointer to a function of type int to use
*/

void	array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t	i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < sixe; i++)
			action(array[i]);
	}
}
