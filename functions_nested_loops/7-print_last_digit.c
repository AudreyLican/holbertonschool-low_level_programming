#include "main.h"

/**
* print_last_digit - print the last digit of a number
*
* Return: digit for last number
*/
int print_last_digit(int x)
{
	int	nb;

	nb = x % 10;

	if (x < 0)
		nb = nb * -1;
	_putchar(nb + 48);

	return(nb);
}
