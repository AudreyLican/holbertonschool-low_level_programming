#include "main.h"

/**
* reverse_array - function that reverses the content of an array of integers
* @a: array
* @n: array size
*/

void	reverse_array(int *a, int n)
{
	int	i = 0;
	int	j;
	//char	temp;

	while (i < n / 2)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
		i++;
		j--;
	}
}
