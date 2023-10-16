#include <stdio.h>

/**
* _putchar is print function
*/
void	_putchar(char c)
{
	write(1, &c, 1);
}

/**
* main - entry point
* Description: print
*
* Return: 0
*/
int	main(void)
{
	_putchar();
	putchar('\n');

	return (0);
}
