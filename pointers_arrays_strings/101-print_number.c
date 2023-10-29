#include "main.h"

/**
* print_number - function that prints an integer.
* @n : integer value to print
*/

void	print_number(int n)
{
	unsigned int	nb;

	if (n < 0)
	{
		_putchar('-'); /* treat negative */
		n = -n; /* convert nb in positive*/
	}
	nb = n;
	if (nb >= 10)
	{
		print_number(nb / 10); /* print number on the left side */
	}
	_putchar(nb % 10 + '0'); /* print the number on the rigth side */
}
