#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int	main(void)
{
	int	x;

	x = 0;
	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');

	return (0);
}
