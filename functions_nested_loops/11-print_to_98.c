#include "main.h"

void print_to_98(int n)
{
	int	x;

	x = 98;
	while (n <= x)
	{
		printf("%d", n);
		if (n != x)
			printf(", ");
		++n;
	}
	printf("\n");
}
