#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int	main(void)
{
	int num;

	num = 0;
	while(num <= 16)
	{
		putchar('%x' + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
