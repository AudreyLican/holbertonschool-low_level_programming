#include "main.h"

/**
* print_sign - function that print the sign of a number
* @n : given number
*
* Return: 0 Null - 1 Positive - -1 Negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
