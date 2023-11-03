#include "main.h"

/**
* print_number - function that prints an integer
* @n : integer value
*
* Return: Always 0
*/
void	print_number(int n)
{
	if (n > 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + 48);

	if else (n < 0)
	{
		n = -n;
		_putchar('-');
		print_number(n / 10);
	}
	_putchar(n % 10 + 48);
}
