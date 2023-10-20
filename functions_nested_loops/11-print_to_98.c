#include "main.h"

/**
* print_to_98 - function that prints all natural numbers from n to 98
*
* @n : given number for starting counter
*/
void print_to_98(int n)
{
	int	x;

	x = 98;
	while (n < x)
	{
		printf("%d", n);
		if (n != x)
			printf(", ");
		n++;
	}
	while (n > x)
	{
		printf("%d", n);
		if (n != x)
			printf(", ");
		n--;
	}
	if (n != x)
		printf(", ");
	if (n == x)
		printf("%d", n);

	printf("\n");
}
