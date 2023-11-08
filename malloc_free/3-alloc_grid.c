#include "main.h"

/**
 * **alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width : interger of a size
 * @height : integer of a size
 *
 * Return:
 */

int **alloc_grid(int width, int height)
{
	int k, l;
	int **a = NULL; /* it's the grid*/

	if (width <= 0 || height <= 0)
		return (NULL);
	/* allocate memory for the rows */
	a = (int **)malloc(height * sizeof(int));
	if (a == NULL)
		return (NULL); /* memory allocation failed */

	/* allocate memory for the colums of each row*/
	for (k = 0; k < height; k++)
	{
		a[k] = (int *)malloc(width * sizeof(int));
		if (a[k] == NULL)
		{
			/* if memory allocation failed, free previous allocated memory */
			for (l = 0; l < width; l++)
				free(a[l]);
			free(a);
			return (NULL);
		}
		for (l = 0; l < width; l++)
			a[k][l] = 0;
	}
	return (a);
}
