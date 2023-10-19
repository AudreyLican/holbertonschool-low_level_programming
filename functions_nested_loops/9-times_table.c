#include "main.h"

/**
* times_table - function print 9 times tables starting with 0
*/
void times_table(void)
{
	int	i;
	int	j;
	int	x;
	int	y;

	x = 9;
	for (i = 0; i <= x; i++)
	{
		for (j = 0; j <= x; j++)
		{
			y = i * j;
			if (y < 10)
			{
				if( j != 0)
				{
					_putchar(32);
					_putchar(32);
				}
				_putchar(y + 48);
			}
			else
			{
				_putchar(32);
				_putchar(y / 10 + 48);
				_putchar(y % 10 + 48);
			}
			if (j != 9)
				_putchar(44);
		}
		_putchar('\n');
	}
}
