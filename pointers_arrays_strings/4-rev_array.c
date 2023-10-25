#include "main.h"

/**
* reverse_array - function that reverses the content of an array of integers
* @a: array
* @n: array size
*/

void	reverse_array(int *a, int n)
{
	int	i = 0;
	int	j = n - 1;
	char	temp;

	while (i < j / 2)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
