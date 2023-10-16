#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int	main(void)
{
	char c;
	char d;

	c = 97;
	d = 122;
	while (c <= d)
	{
		putchar(c);
		c++;
	}

	return (0);
}
