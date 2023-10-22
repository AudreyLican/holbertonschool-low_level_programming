#include "main.h"

/**
* print_triangle - function that prints a triangle
* @size : integer value
*
*/
void print_triangle(int size)
{
	int	i;
	int	j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j >= 1; j--)
			{
				if (i < j)
					_putchar(32);
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
