#include "function_pointers.h"
#include <stdlib.h>

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

	if (array == 0)
		return;
	if (size == 0)
		return;
	if (action == 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
