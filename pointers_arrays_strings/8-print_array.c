#include "main.h"

/**
* print_array - function that prints n elements of an array of integers
* @a : string
* @n : number of elements to print
*
*/
void print_array(int *a, int n)
{
	int	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
