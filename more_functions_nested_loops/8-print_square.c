#include "main.h"

/**
* print_square - function that prints a square
* @size : integer value
*
*/
void print_square(int size)
{
	int	a;
	int	b;

	if (size > 0)
	{
		for (b = 0; b < size; b++)
		{
			for (a = 0; a < size; a++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
