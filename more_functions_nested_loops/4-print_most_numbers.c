#include "main.h"

/**
* print_most_numbers - function that prints the numbers
* without two digit : 2 and 4
* _putchar can only be use twice
*/
void print_most_numbers(void)
{
	int	num;

	for (num = 0; num <= 9; ++num)
	{
		if (num == 2 || num == 4)
			num++;
		_putchar(num + 48);
	}
	_putchar('\n');
}
