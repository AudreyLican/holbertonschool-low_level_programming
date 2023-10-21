#include "main.h"

/**
* print_diagonal - function that draws a diagonal line
* @n : given integer 
*
*/
void print_diagonal(int n)
{
	int	i;
	int	j;

	if (n > 0)
	{
		for(i = 0; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != i)
					_putchar(32);
				else if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}

		}
	}
	else
		_putchar('\n');
}
