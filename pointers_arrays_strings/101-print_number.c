#include "main.h"

/**
* print_number - function that prints an integer.
* @n : integer value to print
*/

void	print_number(int n)
{
	if (n < 0)
	{
		_putchar('-'); /* treat negative */
		n = -n; /* convert nb in positive*/
	}
	if (n  >= 10)
	{
		print_number(n / 10); /* print number on the left side */
	}
	_putchar(n % 10 + '0'); /* print the number on the rigth side */
}
